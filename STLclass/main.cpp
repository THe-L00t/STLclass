//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 목 910					5월 19일 월요일		(12주 1일)
// 2025. 6. 19 기말 시험
// 2025. 5. 12 월요일 - 졸업작품 중간발표
//---------------------------------------------------------------------------//
//  반복자와 알고리즘
//  find() 
//  find_if()
//  copy()
//---------------------------------------------------------------------------
//
// 
#include <iostream>	
#include <algorithm>
#include "save.h"
#include "STRING.h"

extern bool 관찰;
template<class It, class T>
const It& my_find(const It& s, const It& e, const T& val) {
    It now = s;
    while (now != e) {
        if (*now == val) return now;
        ++now;
    }
    return now;
}

template<class It, class T>
const It& my_find_if(const It& s, const It& e, bool(*f)(T)) {
    It now = s;
    while (now != e) {
        if (f) return now;
        ++now;
    }
    return now;
}

// SFINAE : constexpr 에 대한 설명

int main( ) 
{
    STRING s{ "2025. 5. 26" };
    //[문제] 3보다 큰 숫자를 찾아라.
    auto p = my_find_if(s.begin(), s.end(), [](char c) {
        return '3' < c;
        });

 	save("main.cpp");
}

