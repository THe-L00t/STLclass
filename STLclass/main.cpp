//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 목 910					5월 12일 월요일		(10주 1일)
// 2025. 6. 19 기말 시험
// 2025. 5. 12 월요일 - 졸업작품 중간발표
//---------------------------------------------------------------------------//
//  반복자 - Iterators are a generalization of pointers that allow a C++ program to work 
// with different data structures in a uniform manner.
// 
//---------------------------------------------------------------------------
//
// 
#include <iostream>	
#include "save.h"
#include "STRING.h"

extern bool 관찰;

int main( ) 
{
    STRING s{ "2025. 5. 15" };
    
    for (char c : s) {
        std::cout << c << "-----";
    }
    std::cout << std::endl;

 	save("main.cpp");
}

