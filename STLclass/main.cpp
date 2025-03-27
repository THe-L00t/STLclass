//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 목 910					3월 10일 월요일		(4주 1일)
//---------------------------------------------------------------------------//
//
//	RAII 와 smart pointer 
// 
//---------------------------------------------------------------------------
//
// 
#include <iostream>	
#include <numeric>
#include "save.h"
 
void f() {
	int* p = new int[5];
	std::cout << "번지 - " << p << std::endl;
	for (size_t i = 0; i < 5; i++)
	{
		std::cout << p[i] << std::endl;
	}
	delete[] p;
}

int main( ) 
{
	for (size_t i = 0; i < 10; i++)
	{
		f();
	}
	
	save("main.cpp");

}


// 중요한 내용
// C의 malloc는 void*를 반환한다.  //heap
// c++의 new 는 가공한 주소를 반환한다.  //free store
