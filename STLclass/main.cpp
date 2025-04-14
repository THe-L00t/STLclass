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


extern bool 관찰;
int main( ) 
{
	// [문제]

	std::ifstream in{ "main.cpp" };
	if (not in) {
		return 20250414;
	}

	STRING s;
	size_t cnt{};
	while (in >> s) {
		std::cout << s << std::endl;
		++cnt;
	}
	std::cout << "총 " << cnt << "개의 단어를 읽었습니다. " << std::endl;
	save("main.cpp");
	save("STRING.cpp");
}

