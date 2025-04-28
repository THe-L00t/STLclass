//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 목 910					4월 3일 월요일		(8주 2일)
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

extern bool 관찰;


int main( ) 
{
   std::vector<int> a = { 1,2,3,4,5,6,7,8,9,10 };
    
 	save("main.cpp");

    while (true) {
        std::cout << "몇 번째 데이터를 원하시나요" << std::endl;
        int num;
        std::cin >> num;
        std::cout << "찾는 값은 " << a.at(num) << "입니다." << std::endl;
    }
}

