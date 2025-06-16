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
#include <vector>
#include <list>
#include <algorithm>
#include <ranges>
#include "save.h"
#include "STRING.h"

using namespace std;

extern bool 관찰;


int main( ) 
{
    // 지연 평가(lazy-evaluation)
    for (int num : views::iota(1))  // 1부터 시작하는 무한한 ranges를 만듦
        cout << num << " ";
    for (int num : views::iota(1) | views::take(1000))  // 1000개만 출력
        cout << num << " ";
    for (int num : views::iota(1) | views::take_while([](int num){ return num&1;}))  // 홀수가 나올때까지만 출력, predicate이용
        cout << num << " ";
    for (int num : views::iota(1) | views::reverse)  // 거꾸로 출력
        cout << num << " ";
 	save("main.cpp");
}

