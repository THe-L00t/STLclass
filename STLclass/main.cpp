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
	int* p = new int[20'0000'0000];		// 기본 초기화 하지 않는다. 명시적으로 초기화 하고 싶다면 {}할것
	std::cout << "번지 - " << p << std::endl;
	//delete[] p;
}

int main( ) 
{
	
	try {
		while (true) {
			f();
		}
	}
	catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
	save("main.cpp");

}


// 중요한 내용
// C의 malloc는 void*를 반환한다.  //heap
// c++의 new 는 가공한 주소를 반환한다.  //free store
