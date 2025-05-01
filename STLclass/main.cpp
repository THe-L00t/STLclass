//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					5�� 1�� ������		(9�� 1��)
// 2025. 5. 5 -> ���� ���� (6/19)
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
#include <algorithm>
#include <list>
#include "save.h"
#include "STRING.h"

extern bool ����;


int main( ) 
{
    std::list<STRING> v{ "1","22","333","4444","55555"};

    std::cout << "����Ʈ�� ũ�� " << sizeof v << std::endl;

    STRING t{ "333" };
    ���� = true;
    v.remove(t);    
    ���� = false;

    for (const STRING& s : v) {
        std::cout << s << std::endl;
    }
    std::cout << std::endl;
 	save("main.cpp");
}

