//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					6�� 12�� �����		(14�� 2��)
// 2025. 6. 19 �⸻ ����
//---------------------------------------------------------------------------//
//  
//  STL Algorithm
// 
// c++20 concept, range, coroutine �� 4���� ū ��ȭ
//---------------------------------------------------------------------------
// ���� ���� : adjacent_find
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

extern bool ����;

int main( ) 
{

    std::string s{ "C++ StandardTemplateLibrary 2025. 06. 12." };
    while (true) {
        std::print("{:^80}", s);
        //100ms ����
        this_thread::sleep_for(100ms);

        std::rotate(s.begin(), s.begin() + 1, s.end());
        std::cout << '\r';
    }
    
 	save("main.cpp");
}

