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
class Dog {
public:
	Dog(int a) : n{ a } {

	}

	int& outn();
	void inn(int&);

	friend std::ostream& operator<<(std::ostream& ot, const Dog& rhs) {
		ot << rhs.n;
		return ot;
	}
private:
	int n;
};
void change(int&, int&);
void change(Dog&, Dog&);

int main( char argc, char* argv) 
{
	{
		Dog a{ 1 }, b{ 2 };

		change(a, b);
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

int& Dog::outn()
{
	return n;
}

void Dog::inn(int& a)
{
	n = a;
}
