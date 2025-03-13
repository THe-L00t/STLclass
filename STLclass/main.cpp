//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					3�� 10�� ������		(1�� 2��)
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

// [����] ����ü �� ���� change�� ����� �ǰڴ�?
// c++���� �ڷ����� ������ �?
// --> �ڵ� ������ �ڵ�ȭ ����

// ���ø��� ����� ���Ǹ� ���ÿ� �ؾ��Ѵ�. 
template <class T>
void change(T&, T&);

// �Ź��� �� #define Dog int 
// using Dog = int;

int main( char argc, char* argv) 
{
	{
		Dog a{ 1 }, b{ 2 };
		change(a, b);		//���ø��� ���� �����Ϸ��� �ڵ带 �ۼ��Ѵ�. T�� ����� Dog������ 
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

// �ҽ����ϰ� ��������� �и��ϴ� ����
// ��������� ��� ���� �Ǿ��ִ�. 
// �ҽ������� obj���Ϸ� �ٲپ� ����Ͽ��� ���� ���� ����ȴ�.
// �׷��� ���ø��� ��� �׷��� ����.