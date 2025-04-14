//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 목 910					4월 3일 월요일		(5주 2일)
// 8주 1일 중간고사 (4월 24일 목요일) - 30점
//---------------------------------------------------------------------------//
//
// class STRING 작성 시작 - STL의 표준 컨테이너가 되도록 발전시킨다.
//							벡터의 동작을 진짜 자세히 이해하려고
//
//---------------------------------------------------------------------------
//
// 
#include <iostream>	
#include <fstream>
#include <array>
#include <algorithm>
#include "save.h"
#include "STRING.h"

// [문제] main.cpp에 있는 단어를 처음부터 50개를 메모리(STRING)에 저장해보자
// 길이 오름차순으로 정렬하자
// 결과를 화면에 출력하자
// 제일 첫 단어를 답지에 적어라

extern bool 관찰;
int main( ) 
{
	

	std::ifstream in{ "main.cpp" };
	if (not in) {
		return 20250414;
	}

	std::array<STRING,50> s;
	size_t cnt{};
	while (in >> s[cnt] && cnt < 50) {
		std::cout << s[cnt] << std::endl;
		++cnt;
	}
	std::sort(s.begin(), s.end());
	std::cout << "총 " << cnt << "개의 단어를 읽었습니다. " << std::endl;
	/*for (const STRING& s1 : s) {
		std::cout << s1 << std::endl;
	}*/
	for (auto i = s.rbegin(); i != s.rend(); ++i)
	{

	}


	save("main.cpp");
	save("STRING.cpp");
}

