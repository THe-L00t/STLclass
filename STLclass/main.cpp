//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 수 910					3월 10일 월요일		(1주 2일)
//---------------------------------------------------------------------------//
//
//	Generic Programming
// 
//---------------------------------------------------------------------------
//
// 
//
#include <iostream>
#include "save.h"


// [문제] main을 변경하지 않고 의도대로 실행되게 코딩하라 
void change(int&, int&);

int main( char argc, char* argv) 
{
	
	int a{ 1 }, b{ 2 };

	change(a, b);
	std::cout << a << "," << b << std::endl;	// [출력] 2,1

	save("main.cpp");
}

void change(int& a, int& b)
{
	int temp{ a };
	a = b;
	b = temp;
}
