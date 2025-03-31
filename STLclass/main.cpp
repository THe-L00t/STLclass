//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 목 910					3월 10일 월요일		(4주 2일)
//---------------------------------------------------------------------------//
//
//	Callable types - 호출가능한 타입
//  1. 함수
// 
//---------------------------------------------------------------------------
//
// 
#include <iostream>	
#include <fstream>
#include <algorithm>
#include "save.h"
 
// [문제] "메인.cpp"파일의 소문자를 대문자로 변환하여 "메인 대문자.cpp"에 저장하라 
int main( ) 
{
	
	std::ifstream in{ "main.cpp" };
	if (not in) return 404;
	std::ofstream out{ "메인 대문자.cpp" };

	std::transform(std::istreambuf_iterator<char>{in}, {}, std::ostreambuf_iterator<char>{out}, 
		[](char c) {
			return toupper(c); 
		});		//들어갈 수 있는 함수 가 무엇인지, callable

	save("main.cpp");

}


