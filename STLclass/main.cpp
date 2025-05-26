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
#include <vector>
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
const It& my_find_if(const It& s, const It& e, T callable) {
    It now = s;
    while (now != e) {
        if (callable(*now)) return now; // 프레더킷 : 판단해주는 놈
        ++now;
    }
    return now;
}

// SFINAE : constexpr 에 대한 설명

int main( ) 
{
    STRING s{ "2025. 5. 26" };

    std::vector<char> v;
    v.reserve(20);
    //[문제] s가 관리하는 문자들을 v에 복사하라

    std::copy(s.begin(), s.end(), v.begin());
    // 현재 vector에는 begin이 nullptr을 가리키고 있다. 
    std::copy(s.begin(), s.end(), std::ostream_iterator<char>{ std::cout });

 	save("main.cpp");
}

