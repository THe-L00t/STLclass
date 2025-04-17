//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 목 910					4월 3일 월요일		(7주 1일)
// 8주 1일 중간고사 (4월 24일 목요일) - 30점
//---------------------------------------------------------------------------//
//
// STL containers - Contianers are objects that store other objects.
//
//
//---------------------------------------------------------------------------
//
// 
#include <iostream>	
#include <vector>
#include <memory>
#include "save.h"
#include "STRING.h"

extern bool 관찰;
int main( ) 
{
	std::vector<int> v;
	std::cout << "원소의 개수 " << v.size() << std::endl;
	std::cout << "담을 수 있는 원소의 개수 " << v.capacity() << std::endl;
	std::cout << "원소의 위치 " << v.data() << std::endl;

	std::cout << std::endl;
	v.push_back(1);
	std::cout << "원소의 개수 " << v.size() << std::endl;
	std::cout << "담을 수 있는 원소의 개수 " << v.capacity() << std::endl;
	std::cout << "원소의 위치 " << v.data() << std::endl;
 	save("main.cpp");
}

