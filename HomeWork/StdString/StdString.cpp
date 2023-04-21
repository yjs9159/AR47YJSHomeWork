
#include <iostream>

int main()
{

	// 파일 입출력이나 경로를 표형할 때 문자를 잘 편집할 수 있어야 하기 때문에
	// 문자열을 편집하는 기술이나 알고리즘 함수들에 대해서 많이 알면 알수록 편해진다

	// 인코딩
	// 숫자 == 어떤 글자나 의미를 매칭하는 방식
	// 
	// 1바이트 문자 인코딩 => 아스키 or ANSI
	
	// 1~2바이트 멀티바이트 인코딩 <= 특정 한 국가의 문자 정도는 표현할 수 있게 되었따
	
	// 2바이트 와이드 바이트
	// 2바이트 인코딩까지는 국가별로 달라지는 매칭 형식

	// 3바이트 문자형 및 4바이트 문자형
	// UTF 인코딩 시리즈들

	// 국가코드에 따른 문자열로 해석된다

	wchar_t Arr[4] = L"하 호";
	
	// std::string vectot형태의 자료구조
	std::string Text = "하 호";
	
	
	"Hello World\n";

	{

	}

	// std::string 내부에는 다음과 같은 함수들이 있다
	{
		std::string Text0 = "안녕하세요";

		// "안녕" => "오늘"로 바꿔줘
		// Text0.replace()

		// 사용해보기
		// +는 내부에서 append를 호출하고 있는것
		// Text0.append()

		// Text0.find

		// Text0.rfind

		// Text0.find_last_not_of
		// Text0.find_last_first_of

	}


	{
		// char
		std::string Text0 = "안녕하세요";
		std::string Text1 = "반갑습니다";
		std::string Result = Text0 + Text1;

		std::cout << Result << std::endl;
	}

	{
		// 국가 코드를 변경해주는 함수를 사용해야 출력이 가능
		setlocale(LC_ALL, "KOR");

		// 기본적으로 비쥬얼 스튜디오의 출력 국가 코드는 미국
		// 와이드 바이트는 국가 코드에 영향을 받기 때문

		// wchar
		std::wstring Text0 = L"안녕하세요";
		std::wstring Text1 = L"반갑습니다";
		std::wstring Result = Text0 + Text1;

		std::wcout << Result << std::endl;
	}

}
