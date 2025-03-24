//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 수 910					3월 10일 월요일		(3주 2일)
//---------------------------------------------------------------------------//
//
//	많은 수의 자료를 다루기 - int 를 메모리 크기 그대로 저장해야~
// 
//---------------------------------------------------------------------------
//
// 
#include <iostream>	// 헤더 파일의 전체 코드를 가져온다. 주석은 모두 지운다. 
#include <random>
#include <fstream>
#include <array>
#include <print>
#include "save.h"

// 컴파일러의 동작

// [문제] "int 1000개.txt" 파일에서 가장 큰 값을 찾아 화면에 출력하라.
// 출력된 값도 답지에 적어라 

std::default_random_engine dre{ };				//값을 뽑아내고
std::uniform_int_distribution uid{0,9'999'999};	//가공한다.

int main( char argc, char* argv) 
{
	
	std::ifstream in{ "진짜 랜덤 10만개",std::ios::binary };

	std::array<int, 10'0000> arr;

	in.read((char*)arr.data(), sizeof(int) * arr.size());
	
	std::pair res = std::minmax_element(arr.begin(), arr.end());
	std::cout << "최솟값 - " << *res.first << "최댓값 - " << *res.second << std::endl;

	save("main.cpp");
}

// STL이라도 적재적소에 사용하기
// 최소 자원과 최소 노력

