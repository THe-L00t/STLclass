//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 수 910					3월 10일 월요일		(3주 2일)
//---------------------------------------------------------------------------//
//
//	많은 수의 자료를 다루기 - int 를 메모리 크기 그대로 저장해야~
// 
//---------------------------------------------------------------------------
//
// 
#include <iostream>	
#include <random>
#include <fstream>
#include <array>
#include <print>
#include "save.h"


std::default_random_engine dre{ };				
std::uniform_int_distribution uid{0,9'999'999};	

int main( char argc, char* argv) 
{
	
	std::ifstream in{ "진짜 랜덤 10만개",std::ios::binary };

	std::array<int, 10'0000> arr;
	in.read((char*)arr.data(), sizeof(int) * arr.size());
	
	// structured binding
	auto [최솟값, 최댓값] = std::minmax_element(arr.begin(), arr.end());
	std::cout << "최솟값 - " << *최솟값 << "최댓값 - " << *최댓값 << std::endl;

	save("main.cpp");
}



