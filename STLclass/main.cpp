//---------------------------------------------------------------------------//
// 2025.   1.  STL 岿 910 格 910					4岿 3老 岿夸老		(7林 1老)
// 8林 1老 吝埃绊荤 (4岿 24老 格夸老) - 30痢
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

extern bool 包蔓;
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

