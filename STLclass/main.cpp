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
#include <ranges>
#include "save.h"
#include "STRING.h"

using namespace std;
std::default_random_engine dre{ std::random_device{}()};
uniform_int_distribution<int> uidChar{ 'A','Z' };
uniform_int_distribution uid{ 1,50 };
extern bool 관찰;

struct Dog {
    char c{static_cast<char>(uidChar(dre))};
    int n{uid(dre)};

    friend ostream& operator<<(std::ostream& os, const Dog& d) {
        print(os, "[{:}] - {:3}", d.c, d.n);
        return os;
    }
};

int main( ) 
{
    vector<Dog> dogs(100);
    /*sort(dogs.begin(), dogs.end(), [](const Dog& a, const Dog& b) {
        return a.c > b.c;
        });*/

    ranges::sort(dogs, {},&Dog::c);
    for (const Dog& d : dogs) {
        cout << d << endl;
    }

    cout << "dogs를 n기준으로 돌아간다" << endl;
    ranges::sort(dogs, {}, &Dog::n);
    for (const Dog& d : dogs) {
        cout << d << endl;
    }
 	save("main.cpp");
}

