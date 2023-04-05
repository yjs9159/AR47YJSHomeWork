#include <iostream>
#include "GameEngineArray.h"

int main()
{
    // �ܿ�ž� �մϴ�.
// ������ ���� �������� ���� �� �޸� ��¿� ǥ��. 
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    {
        // �����Ϸ����� �����ϴ� Arr������
        // operator = �Լ��� �������� �ʾҴ�.
        int Arr0[10] = { 0, 1, 2, 3 ,4, 5,6 };
        int Arr1[10];
        // Arr1 = Arr0;
    }

    {
        //               600����
        // int* ArrPtr = new int[20]
        GameEngineArray Array0(10);


        for (size_t i = 0; i < Array0.Count(); i++)
        {
            Array0[i] = i;
        }

        for (size_t i = 0; i < Array0.Count(); i++)
        {
            printf_s("%d\n", Array0[i]);
        }

        printf_s("---------------------------------------\n");

        //          700����
        // ArrPtr = new int[10]
        // ���� 1 ������ �����͸� �����ϴ°��� ���ϴ°��̰�
        // ���� 2 �پ��� Ŀ���� �����ʹ� �����Ǿ�� �Ѵ�.
        // Array0.ReSize(5);
        Array0.ReSize(3);

        for (size_t i = 0; i < Array0.Count(); i++)
        {
            printf_s("%d\n", Array0[i]);
        }
        printf_s("---------------------------------------\n");
    }

    {
        GameEngineArray Array0(10);
        GameEngineArray Array1(5);

        // ����3 �� �������� �����ϰ� ���Ķ�. //�������� �ȰŰ���?
        Array1 = Array0;
    }

    {
        GameEngineArray Array0(10);
        GameEngineArray Array1(5);

        for (size_t i = 0; i < Array0.Count(); i++)
        {
            Array0[i] = i;
        }

        // ����4 ������ ������ �迭�� �ǰ� ������ּ���.
        // Array1 10�� ¥�� �迭�� �ǰ� 0 1 2 3 4 5 6 7 8 9
        Array1 = Array0;

        for (size_t i = 0; i < Array1.Count(); i++)
        {
            printf_s("%d\n", Array1[i]);
        }

    }


}