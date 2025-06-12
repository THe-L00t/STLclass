//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 목 910					6월 12일 목요일		(14주 2일)
// 2025. 6. 19 기말 시험
//---------------------------------------------------------------------------//
//  
//  distance 구현 - tag dispatch, if constexpr, concept, SFINAE
//---------------------------------------------------------------------------
// 
// 
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "save.h"
#include "STRING.h"

using namespace std;

extern bool 관찰;

template<class It>
iterator_traits<It>::difference_type my_distance(It b, It e) 
{
    typename iterator_traits<It>::difference_type  d{}; //typename을 이용해 자료형임을 명시
    while (b not_eq e) {
        ++b;
        ++d;
    }
    return d;
}

int main( ) 
{
    vector<int> v{ 1,2,3,4,5 };
    cout << my_distance(v.begin(), v.end()) << endl;
    list<int> l{ 1,2,3,4,5 };
    std::cout << my_distance(l.begin(), l.end()) << endl;
 	save("main.cpp");
}

