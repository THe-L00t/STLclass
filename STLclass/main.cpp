//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 목 910					6월 12일 목요일		(14주 2일)
// 2025. 6. 19 기말 시험
//---------------------------------------------------------------------------//
//  
//  STL Algorithm
// 
// c++20 concept, range, coroutine 등 4가지 큰 변화
//---------------------------------------------------------------------------
// 과제 관련 : adjacent_find
// 
#include <iostream>
#include <algorithm>
#include <string>
#include <chrono>
#include <print>
#include <thread> 
#include "save.h"
#include "STRING.h"

using namespace std;

extern bool 관찰;

int main( ) 
{

    std::string s{ "C++ StandardTemplateLibrary 2025. 06. 12." };
    while (true) {
        std::print("{:^80}", s);
        //100ms 정지
        this_thread::sleep_for(100ms);

        std::rotate(s.begin(), s.begin() + 1, s.end());
        std::cout << '\r';
    }
    
 	save("main.cpp");
}

