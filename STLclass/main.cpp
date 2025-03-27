//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					3�� 10�� ������		(4�� 1��)
//---------------------------------------------------------------------------//
//
//	RAII �� smart pointer 
// �ڿ��� �����ֱ⸦ �ڵ鷯�� �����ֱ⿡ ��ġ��Ű�� ���α׷��� ���
//---------------------------------------------------------------------------
//
// 
#include <iostream>	
#include <numeric>
#include <memory>
#include "save.h"
 
class Dog {
public:
	Dog() { std::cout << "�����̿�" << std::endl; }
	~Dog() { std::cout << "�Ҹ��̿�" << std::endl; }
};


void f() {
	//std::unique_ptr<Dog[]> p{new Dog[10]};		//assignment (=) ���� 
	// new delete ¦�� �ȸ����� ����
	// �ᱹ
	std::unique_ptr<Dog[]> p = std::make_unique<Dog[]>(10);
	std::cout << "f �Լ��� ������ ��" << std::endl;
}

int main( ) 
{
		f();
	
	save("main.cpp");

}


// �߿��� ����
// C�� malloc�� void*�� ��ȯ�Ѵ�.  //heap
// c++�� new �� ������ �ּҸ� ��ȯ�Ѵ�.  //free store
