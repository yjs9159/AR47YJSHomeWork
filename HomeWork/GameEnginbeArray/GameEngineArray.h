#pragma once

typedef int DataType;

// ���� : 
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
		return *this;
	}

	size_t Count()
	{
		return ArrCount;
	}

	int& operator[](size_t _Index)
	{
		return ArrPtr[_Index];
	}

	void ReSize(int _Value)
	{
		// ������ �Ҵ�� �迭�� �˰� �ִ� ���� ArrPtr
		if (nullptr == ArrPtr)
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

