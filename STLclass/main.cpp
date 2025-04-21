//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					4�� 3�� ������		(7�� 1��)
// 8�� 1�� �߰���� (4�� 24�� �����) - 30��
//---------------------------------------------------------------------------//
//
// STL containers - Contianers are objects that store other objects.
// array
// vector
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
	int old = v.capacity();
	for (size_t i = 0; i < 1'0000; i++)
	{
		v.push_back(i);
		if (old != v.capacity()) {
			std::cout << v.capacity() << std::endl;
			old = v.capacity();
		}
	}
	
 	save("main.cpp");
}

