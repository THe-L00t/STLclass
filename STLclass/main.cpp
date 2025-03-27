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
 
class Dog {
public: 
	Dog() { std::cout << "생성이요" << std::endl; }
	~Dog() { std::cout << "소멸이요" << std::endl; }
};

void f() {
	Dog* p = new Dog;

	throw 20250327;
	std::cout << "f 함수가 끝나기 전" << std::endl;
	delete p;
}

int main( ) 
{
	try {
		f();
	}	
	catch (...) { //ellipsis
		std::cout << "예외를 catch 하였다.";
	}
	save("main.cpp");

}


// 중요한 내용
// C의 malloc는 void*를 반환한다.  //heap
// c++의 new 는 가공한 주소를 반환한다.  //free store
