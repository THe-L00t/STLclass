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
#include <print>
#include <array>
#include <algorithm>
#include <fstream>
#include "save.h"

// 컴파일러의 동작

// [문제] 랜덤 int값 1000개 파일 "int 1000개.txt"에 저장하라. - 텍스트로  int를 저장한다. 
// 저장한 파일은 사람이 읽을 수 있어야한다.
// 나중에 파일에서 int 값을 읽어올 수 있어야 한다. 

std::default_random_engine dre{ };
//std::mt19937_64 dre;								//값을 뽑아내고
std::uniform_int_distribution uid{0,9'999'999};	//가공한다.

int main( char argc, char* argv) 
{
	std::array<int, 1'000> n;	
	std::ofstream out{"int 1000개.txt"};
	
	for (int& a : n) {
		out << uid(dre) << ' ';
	}
	

	save("main.cpp");
}

// STL이라도 적재적소에 사용하기
// 최소 자원과 최소 노력

