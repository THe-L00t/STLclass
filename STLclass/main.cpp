//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					4�� 3�� ������		(7�� 1��)
// 8�� 1�� �߰���� (4�� 24�� �����) - 30��
//---------------------------------------------------------------------------//
//
// STL containers - Contianers are objects that store other objects.
//
//
//---------------------------------------------------------------------------
//
// 
#include <iostream>	
#include <vector>
#include <memory>
#include "save.h"
#include "STRING.h"

extern bool ����;
int main( ) 
{
	std::vector<int> v;
	std::cout << "������ ���� " << v.size() << std::endl;
	std::cout << "���� �� �ִ� ������ ���� " << v.capacity() << std::endl;
	std::cout << "������ ��ġ " << v.data() << std::endl;

	std::cout << std::endl;
	v.push_back(1);
	std::cout << "������ ���� " << v.size() << std::endl;
	std::cout << "���� �� �ִ� ������ ���� " << v.capacity() << std::endl;
	std::cout << "������ ��ġ " << v.data() << std::endl;
 	save("main.cpp");
}

