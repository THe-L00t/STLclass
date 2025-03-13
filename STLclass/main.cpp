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
// Dog를 class로 코딩하시오
class Dog {
public:
	Dog() = default;
	Dog(int a) : n{ a } {}

	int& outn();
	void inn(int&);

	//operator int(){
	//	return n;  
    //}

	friend std::ostream& operator<<(std::ostream& ot, const Dog& rhs) {
		ot << rhs.n;
		return ot;
	}
private:
	int n;
};
void change(int&, int&);
void change(Dog&, Dog&);	// 함수 오버로딩 시 컴파일러가 name mangling을 시행함

// 신박한 답 #define Dog int 
// using Dog = int;

int main( char argc, char* argv) 
{
	{
		Dog a{ 1 }, b{ 2 };
		change(a, b);
		//도대체 어떤 함수를 호출하는가
		// 1. change(Dog, Dog);
		// 2. change(Dog&, Dog&);
		// 3. 컴파일러인 내가 만들 순 없을까? (코드 자동화의 기능)
		std::cout << a << "," << b << std::endl;	// [출력] 2,1
	}

	{
		int a{ 1 }, b{ 2 };

		change(a, b);
		std::cout << a << "," << b << std::endl;	// [출력] 2,1
	}

	save("main.cpp");
}

void change(int& a, int& b)
{
	int temp{ a };
	a = b;
	b = temp;
}

void change(Dog& a, Dog& b)
{
	int temp{ a.outn() };
	a.inn(b.outn());
	b.inn(temp);
}
//확인할 수 없는 외부 기호 "void __cdecl change(class Dog &,class Dog &)" (? change@@YAXAEAVDog@@0@Z)
int& Dog::outn()
{
	return n;
}

void Dog::inn(int& a)
{
	n = a;
}
