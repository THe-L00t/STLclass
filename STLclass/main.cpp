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

	friend std::ostream& operator<<(std::ostream& ot, const Dog& rhs) {
		ot << rhs.n;
		return ot;
	}
private:
	int n;
};

// [질문] 도대체 몇 개의 change를 만들면 되겠니?
// c++언어에서 자료형의 개수는 몇개?
// --> 코드 생성을 자동화 하자

template <class T>
void change(T&, T&);

// 신박한 답 #define Dog int 
// using Dog = int;

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


int& Dog::outn()
{
	return n;
}

void Dog::inn(int& a)
{
	n = a;
}

template<class T>
void change(T& a, T& b)
{
	T temp{ a };
	a = b;
	b = temp;
}
