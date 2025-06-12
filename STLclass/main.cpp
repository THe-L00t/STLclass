//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 목 910					6월 12일 목요일		(14주 2일)
// 2025. 6. 19 기말 시험
//---------------------------------------------------------------------------//
//  
//  STL sort 관련 알고리즘 - 복잡도 순서대로 
//  1. partition
//  2. nth_element
//  3. partial_sort
//  4. sort
//  5. stable_sort
//  6. 
// 
//---------------------------------------------------------------------------
// 과제 관련 : adjacent_find
// 
#include <iostream>
#include <vector>
#include <algorithm>
#include <print>
#include <random>
#include <numeric>
#include "save.h"
#include "STRING.h"

using namespace std;
std::default_random_engine dre{ std::random_device{}()};
extern bool 관찰;

int main( ) 
{
    vector<int> v(100);
    iota(v.begin(), v.end(),1);
    {
        shuffle(v.begin(), v.end(),dre);
        cout << "partition하기 전" << endl;
        for (int i : v)
            print("{:8}", i);
        std::cout << endl;
        //숫자에 동그라미가 있는 숫자와 아닌 숫자 분리
        cout << "홀수와 짝수로 분리" << endl;
        auto position = partition(v.begin(), v.end(), [](int num) {
            return num & 1;
            });
        cout << "홀수" << endl;
        for (auto i = v.begin(); i < position; ++i) 
            print("{:8}", *i);
        std::cout << endl;
        cout << "홀수" << endl;
        for (auto i = position; i < v.end(); ++i)
            print("{:8}", *i);
        std::cout << endl;
    }
 	save("main.cpp");
}

