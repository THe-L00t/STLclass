//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 목 910					5월 19일 월요일		(11주 1일)
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
    
    // [예고] s를 거꾸로 출력하라 

    for (auto i = s.rbegin(); i != s.rend(); ++i) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;

 	save("main.cpp");
}

