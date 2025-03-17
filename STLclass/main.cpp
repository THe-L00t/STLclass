//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 수 910					3월 10일 월요일		(2주 2일)
//---------------------------------------------------------------------------//
//
//	많은 수의 자료를 다루기 - int 
// 
//---------------------------------------------------------------------------
//
// 
#include <iostream>	// 헤더 파일의 전체 코드를 가져온다. 주석은 모두 지운다. 
#include <random>
#include <fstream>
#include <print>
#include "save.h"

// 컴파일러의 동작

// [문제] "int 1000개.txt" 파일에서 가장 큰 값을 찾아 화면에 출력하라.
// 출력된 값도 답지에 적어라 

std::default_random_engine dre{ };				//값을 뽑아내고
std::uniform_int_distribution uid{0,9'999'999};	//가공한다.

int main( char argc, char* argv) 
{
	
	std::ofstream out{"int 1000개.txt"};
	int cnt{ 0 };
	for (size_t i = 0; i < 1000;++i) {
		std::print(out, "{:8}", uid(dre));
		if (not(++cnt % 10)) out << std::endl;
	}

	{
		std::ifstream in{ "int 1000개.txt" };
		if (not in) return 404;
		while (in) {
			int temp;
			in >> temp;
			std::cout << temp << ' ';
		}
	}
	

	save("main.cpp");
}

// STL이라도 적재적소에 사용하기
// 최소 자원과 최소 노력

