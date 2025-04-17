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

std::vector<int> v1;

extern bool ����;
int main( ) 
{
	std::vector<int> v{1};
	std::unique_ptr<std::vector<int>> v2 = std::make_unique<std::vector<int>>(1);

	std::cout << sizeof(v) << " " << addressof(v) << " " << typeid (v).name() << std::endl;
	//std::cout << sizeof(v) << " " << v.data( ) << " " << typeid (v).name() <<  std::endl;
	std::cout << sizeof(v1) << " " << addressof(v1) << " " << typeid (v1).name() << std::endl;
	std::cout << sizeof(*v2.get()) << " " << v2.get() << " " << typeid (v2.get()).name() << std::endl;
 	//save("main.cpp");
}

