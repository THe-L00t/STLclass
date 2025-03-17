//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					3�� 10�� ������		(2�� 2��)
//---------------------------------------------------------------------------//
//
//	Generic Programming
// 
//---------------------------------------------------------------------------
//
// 
//
#include <iostream>	// ��� ������ ��ü �ڵ带 �����´�. �ּ��� ��� �����. 
#include "save.h"

// �����Ϸ��� ����

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


template <class T>
void change(T&, T&);



int main( char argc, char* argv) 
{
	{
		Dog a{ 1 }, b{ 2 };
		change(a, b);		
		std::cout << a << "," << b << std::endl;	// [���] 2,1
	}

	{
		int a{ 1 }, b{ 2 };

		change(a, b);
		std::cout << a << "," << b << std::endl;	// [���] 2,1
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

// �ڷᱸ���� �˰����� �ڷ����� ������� ������ �� �ִ�. generic�� �� �ִ�. �ᱹ tempalte�� ���� �� ��︰��. 
//