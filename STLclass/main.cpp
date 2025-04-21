//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 목 910					4월 3일 월요일		(7주 1일)
// 8주 1일 중간고사 (4월 24일 목요일) - 30점
//---------------------------------------------------------------------------//
//
// STL containers - Contianers are objects that store other objects.
// array
// vector
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
	int old = v.capacity();
	v.reserve(5000);
	for (size_t i = 0; i < 1'0000; i++)
	{
		v.push_back(i);
		if (old != v.capacity()) {
			std::cout << v.capacity() << std::endl;	// 최대한 재할당 받을 경우를 줄여야 한다
			old = v.capacity();						// 50퍼센틌기 늘어난다
		}
	}
	
 	save("main.cpp");
}

