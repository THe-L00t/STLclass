//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					4�� 3�� ������		(8�� 2��)
// 
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
#include "save.h"
#include "STRING.h"

extern bool ����;


int main( ) 
{
   std::vector<int> a = { 1,2,3,4,5,6,7,8,9,10 };
    
 	save("main.cpp");

    while (true) {
        std::cout << "�� ��° �����͸� ���Ͻó���" << std::endl;
        int num;
        std::cin >> num;
        std::cout << "ã�� ���� " << a.at(num) << "�Դϴ�." << std::endl;
    }
}

