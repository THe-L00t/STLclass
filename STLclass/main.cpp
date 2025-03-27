//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					3�� 10�� ������		(4�� 1��)
//---------------------------------------------------------------------------//
//
//	RAII �� smart pointer 
// 
//---------------------------------------------------------------------------
//
// 
#include <iostream>	
#include <numeric>
#include "save.h"
 
class Dog {
public: 
	Dog() { std::cout << "�����̿�" << std::endl; }
	~Dog() { std::cout << "�Ҹ��̿�" << std::endl; }
};

void f() {
	Dog* p = new Dog;

	throw 20250327;
	std::cout << "f �Լ��� ������ ��" << std::endl;
	delete p;
}

int main( ) 
{
	try {
		f();
	}	
	catch (...) { //ellipsis
		std::cout << "���ܸ� catch �Ͽ���.";
	}
	save("main.cpp");

}


// �߿��� ����
// C�� malloc�� void*�� ��ȯ�Ѵ�.  //heap
// c++�� new �� ������ �ּҸ� ��ȯ�Ѵ�.  //free store
