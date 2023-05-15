#include <iostream>

class Bullet
{
public:
	void Update()
	{

	}
};

typedef Bullet DataType;

// 설명 : 
class GameEngineArray
{
public:
	// delete Function
	GameEngineArray(const GameEngineArray& _Other) = delete;
	GameEngineArray(GameEngineArray&& _Other) noexcept = delete;
	GameEngineArray& operator=(GameEngineArray&& _other) noexcept = delete;

	// constructer destructer
	GameEngineArray(size_t _Value)
		: ArrPtr(new DataType[_Value])
		, ArrCount(_Value)
	{
	}

	~GameEngineArray()
	{
		if (nullptr != ArrPtr)
		{
			delete[] ArrPtr;
			ArrPtr = nullptr;
		}
	}

	GameEngineArray& operator=(const GameEngineArray& _Other)
	{
		ArrCount = _Other.ArrCount;
		ArrPtr = _Other.ArrPtr;

		return *this;
	}

	size_t Count()
	{
		return ArrCount;
	}

	DataType& operator[](size_t _Index)
	{
		return ArrPtr[_Index];
	}

	void ReSize(int _Value)
	{
		// 20줄 안팍으로 숙제해라
		// 삼항 연산자 써보기

		// 기존의 할당된 배열을 알고 있는 것은 ArrPtr

		// 숙제-> 기존의 있던 값에서 현재의 배열에 복사한 다음 삭제해야 한다
		if (nullptr != ArrPtr)
		{
			delete[] ArrPtr;
			ArrPtr = nullptr;
		}

		ArrPtr = new DataType[_Value];
		ArrCount = _Value;
	}

protected:

private:
	size_t ArrCount;
	DataType* ArrPtr = nullptr;
};


// 모든 코드는 동일한데 자료형만 변수처럼 사용하고 싶을 때 사용하는 문법이 template
// template 이라는 문법은
// 특정 함수나 특정 클래스에서 자료형만 바뀐 완전히 동일한 함수나 완전히 동일한 클래스를
// 만들고 싶을 때 사용하는 문법이다

template<typename DataType>
void Function(DataType _Value)
{
	printf_s("%d\n", _Value);
}
// template으로 만든 뭔가가 있는데
// 딱 이게 char일때만 특수하게 동작하게 해줘
// 템플릿 특수화 문법
template<> // 이건 안붙혀도 동작하지만 명시적으로 하기위해 template<>는 붙이는게 좋다 
void Function(char _Value)
{
	printf_s("%c\n", _Value);
}

//void Function(short _Value)
//{
//	printf_s("%d\n", _Value);
//}

template<typename Datatype>
class Test
{
public:
	Datatype Value;
};

int main()
{
	GameEngineArray NewArr(20);

	for (size_t i = 0; i < NewArr.Count(); i++)
	{
		NewArr[i].Update();
	}

	// template 함수의 경우
	{
		// 함수의 경우 인자 추론을 할 수 있다
		// 그 상황에 맞춰서 
		//Function<int>(100);
		//Function<char>('1');

		Function/*<bool>*/(true);
		Function/*<int>*/(100);
		Function/*<char>*/('c');
		Function<int>('c');
	}

	{
		// TestInt
		Test<int> NewTestInt;
		NewTestInt.Value = 10;

		Test<int> NewTestInt0;
		NewTestInt0.Value = 10;

		NewTestInt = NewTestInt0; 

		// TestBullet
		Test<Bullet> NewTestBullet;
		NewTestBullet.Value.Update();

		// NewTestInt = NewTestBullet;

		// 클래스는 인자추론이 안된다
	}
}
