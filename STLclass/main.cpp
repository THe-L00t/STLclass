//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 목 910					6월 16일 월요일		(15주 1일)
// 2025. 6. 19 기말 시험
//---------------------------------------------------------------------------//
//  
//  concepts - compile-time에 template 함수에 전달된 인자(타입, non-type)가 
//  concept에 맞는지 아닌지 판단하기 위한 C++언어의 문법
//---------------------------------------------------------------------------
// 
// 
#include <iostream>
#include <string>
#include "save.h"
#include "STRING.h"

using namespace std;

extern bool 관찰;

template<class T>
concept ableAdd = integral<T> or floating_point<T> or same_as < typename string, T > ;

template<ableAdd T>
T add(T a, T b) {
    return a + b;
}

int main( ) 
{
    cout << add(1, 2) << endl;
    cout << add(1.2, 3.4) << endl;
    cout << add("2025"s, ".06.16"s) << endl;
 	save("main.cpp");
}

