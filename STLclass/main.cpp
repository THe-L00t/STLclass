//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					3�� 10�� ������		(3�� 2��)
//---------------------------------------------------------------------------//
//
//	���� ���� �ڷḦ �ٷ�� - int �� �޸� ũ�� �״�� �����ؾ�~
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
	
	std::ifstream in{ "��¥ ���� 10����",std::ios::binary };

	std::array<int, 10'0000> arr;
	in.read((char*)arr.data(), sizeof(int) * arr.size());
	
	// structured binding
	auto [�ּڰ�, �ִ�] = std::minmax_element(arr.begin(), arr.end());
	std::cout << "�ּڰ� - " << *�ּڰ� << "�ִ� - " << *�ִ� << std::endl;

	save("main.cpp");
}



