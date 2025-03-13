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
#include <iostream>
#include "save.h"


// [����] main�� �������� �ʰ� �ǵ���� ����ǰ� �ڵ��϶� 
// Dog�� class�� �ڵ��Ͻÿ�
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
void change(Dog&, Dog&);	// �Լ� �����ε� �� �����Ϸ��� name mangling�� ������

// �Ź��� �� #define Dog int 
// using Dog = int;

int main( char argc, char* argv) 
{
	{
		Dog a{ 1 }, b{ 2 };
		change(a, b);
		//����ü � �Լ��� ȣ���ϴ°�
		// 1. change(Dog, Dog);
		// 2. change(Dog&, Dog&);
		// 3. �����Ϸ��� ���� ���� �� ������? (�ڵ� �ڵ�ȭ�� ���)
		std::cout << a << "," << b << std::endl;	// [���] 2,1
	}

	{
		int a{ 1 }, b{ 2 };

		change(a, b);
		std::cout << a << "," << b << std::endl;	// [���] 2,1
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
//Ȯ���� �� ���� �ܺ� ��ȣ "void __cdecl change(class Dog &,class Dog &)" (? change@@YAXAEAVDog@@0@Z)
int& Dog::outn()
{
	return n;
}

void Dog::inn(int& a)
{
	n = a;
}
