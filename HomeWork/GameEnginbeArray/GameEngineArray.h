#pragma once

typedef int DataType;

// ���� :
class GameEngineArray
{
public:
    // delete Function
    GameEngineArray(const GameEngineArray& _Other) = delete;
    GameEngineArray(GameEngineArray&& _Other) noexcept = delete;
    GameEngineArray& operator=(GameEngineArray&& _Other) noexcept = delete;


    // constrcuter destructer
    GameEngineArray(size_t _Value)
        : ArrPtr(new DataType[_Value])
        , ArrCount(_Value)
    {
        // ArrPtr = new int[100];
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

        ReSize(ArrCount);   
        for (int i = 0; i < ArrCount; ++i)   
            ArrPtr[i] = _Other.ArrPtr[i];

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
        // 20�� ����.
        // ���� ������ �Ẹ�ø� �����̴ϴ�.

        // ������ �Ҵ�� �迭�� �˰� �ִ°��� 
        // ���Ҹ� ����� �ȵȴ�.

        // ������ �ִ� ������ ������ �迭�� �����Ѵ��� �����ؾ� �Ѵ�.
       
        DataType* tempPtr = new DataType[_Value]; 

        int repeat = (_Value >= ArrCount) ? ArrCount : _Value;

        for (int i = 0; i < repeat; ++i)
        {
            tempPtr[i] = ArrPtr[i];   
        }

        DataType* temp = ArrPtr;
        ArrPtr = tempPtr;
        tempPtr = temp;   
        temp = nullptr;

        if (nullptr != tempPtr)
        {
            delete[] tempPtr;
            tempPtr = nullptr;
        }   

        ArrCount = _Value; 

    }

protected:

private:
    size_t ArrCount;
    DataType* ArrPtr = nullptr;

};