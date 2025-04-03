//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 목 910					4월 3일 월요일		(5주 1일)
// 8주 1일 중간고사 (4월 24일 목요일) - 30점
// 6주 1일 과제설명 (4월 10일 목요일) - 30점
//---------------------------------------------------------------------------//
//
//	Callable types - 호출가능한 타입
//  1. 함수
//  2. 함수 포인터
//  3. 람다 - 이름없는 함수, VS에서는 함수 객체를 이용하여 람다를 구현하였다 
//  4. 함수겍체 ( function object ) - 함수 호출 연산자를 오버로딩한 클래스의 객체 
//  5. 멤버함수 
//---------------------------------------------------------------------------
//
// 
#include <iostream>	
#include "save.h"

class Dog {
public:
	void operator()(int n) const {			//함수의 번지 찍어보기
		std::cout << "왜불러 " << std::endl;
	}
};

int main( ) 
{
	int a;
	int b;

	a = b; // a와 b는 타입이 같다.

	void af(int);
	void bf(int);

	//af = bf;		// 대입 불가능 왜냐?? location velue이기 때문

	void(*cf)(int) = af;
	cf = bf;

	Dog dog;

	//dog.bark();
	//++dog ==> dog.operator++();
	dog(1); // function-call operator도 오버로딩이 가능하다

	save("main.cpp");

}
// __cedcl : c언어 함수 인자 전달 방식