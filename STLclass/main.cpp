//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 목 910					5월 19일 월요일		(12주 2일)
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

template<class Fit, class Sit>
void my_copy(Fit s, Fit e, Sit d) {
    while (s not_eq e) {
        *d = *s;            // v.push_back(*s);
        ++s;                // 아무것도 안한다. 
        ++d;
    }
}
// SFINAE : constexpr 에 대한 설명

int main( ) 
{
    STRING s{ "2025. 5. 29" };

    //[문제] s의 문자를 화면에 복사 
    std::vector<char> v;

    my_copy(s.begin(), s.end(), std::back_inserter(v));
    
    for (char c : v) {
        std::cout << c << std::endl;
    }

    std::cout << std::endl;

 	save("main.cpp");
}

