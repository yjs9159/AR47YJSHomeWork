#pragma once
#include "..\GameEngineBase\GameEngineDebug.h"

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
	{
		if (0 >= _Value)
		{
			MsgBoxAssert("0ũ���� �迭�� ���� �� �����ϴ�.");
		}
		ReSize(_Value);
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
		// ���� ������ �Ѵ�
		//ArrCount = _Other.ArrCount;
		//ArrPtr = _Other.ArrPtr;

		ReSize(_Other.ArrCount);	// ������ �޸𸮸� ����� 
		
		for (size_t i = 0; i < _Other.ArrCount; i++)	// �����Ѵ�
		{
			ArrPtr[i] = _Other[i];						// �̰� ���� ������ �Ѵ�
		}


		return *this;
	}

	size_t Count()
	{
		return ArrCount;
	}

	DataType& operator[](size_t _Index) const
	{
		return ArrPtr[_Index];
	}

	void ReSize(int _Value)
	{
		DataType* NewPtr = new DataType[_Value];
		int CopySize = _Value < ArrCount ? _Value : ArrCount;

		for (size_t i = 0; i < CopySize; i++)
		{
			ArrPtr[i] = NewPtr[i];
		}

		if (nullptr != ArrPtr)
		{
			delete[] ArrPtr;
			ArrPtr = nullptr;
		}
		
		ArrPtr = NewPtr;
		ArrCount = _Value;
	}

protected:

private:
	size_t ArrCount;
	DataType* ArrPtr = nullptr;
};

