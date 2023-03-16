
#include <iostream>

int main()
{
    {
        int Value0 = 10;
        int Value1 = 10;

        int* Ptr = &Value0;

        const int* cPtr = &Value1;

        //
        const int* cPtr = &Value1;
        // *뒤에 뭔가를 붙이는건 이제부터 *에 영향을 주는 문법이 된다


        // const int*
        // 포인터형 변수가 사용할 때 *을 붙인다는 것은
        // 자신의 자료형에서 *을 뺀 자료형으로 사용하겠다는 뜻이다
        // ex) *Ptr
        // Ptr == const int*는
        // *Ptr == cont int으로 바꿔서 사용 가능
        // 그러므로 
        // *cPtr = 20;은 고칠 수 없다

        int const ValueTTT0 = 10; // const가 뒤에 붙든

        const int ValueTTT1 = 10; // 앞에 붙든 똑같다. 하지만 앞에 쓸 것
    }
    {
        // 100번지에 있는 A
        char Test0 = 'A';
        // 110번지에 있는 B
        char Test1 = 'A';

        // 120번지에 있는 100번지
        // 100번지 안에 있는 값을 const화 시키는게 아니라
        // 100번지라고 하는 내가 가리키고 있는
        // 주소 자체를 못 바꾸게 하고 싶을 때 사용한다
        const char* const chr = &Test0;

        // 값은 바꿀 수 있지만 주소는 못바꿈
        //char* const chr = &Test0;


        //chr = &Test1;

        // 별을 기준으로 봐야한다
        // 내가 가리키고자 하는 대상의 값 * = const char
        // * 주소값을 바꾸지 않겠다 = const chr
        // const char * const chr = &Test0;
    }
}
