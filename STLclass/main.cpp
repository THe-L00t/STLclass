//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 목 910					5월 1일 월요일		(9주 1일)
// 2025. 6. 19 기말 시험
// 2025. 5. 12 월요일 - 졸업작품 중간발표
//---------------------------------------------------------------------------//
//
// STL containers - Contianers are objects that store other objects.
// array<T,N>   - 유일하게 크기 고정
// vector<T>    - random access, []연산자 제공, O(1)내에 모든 원소에 access, O(1)에 push_back
// deaue<T>     - random access, []연산자 제공, O(1)내에 모든 원소에 access, O(1)에 push_front, push_back
// list<T>      - O(1)에 임의의 위치에 insert, delete가 자유로움, 자료구조를 활동햔 전용함수 제공(remove, sort, splice)
//---------------------------------------------------------------------------
//
// 
#include <iostream>	
#include <algorithm>
#include <deque>
#include <list>
#include <iterator>
#include "save.h"
#include "STRING.h"

extern bool 관찰;


int main( ) 
{
    std::list<STRING> cont{ "1","22","4444","55555" };
    // [문제]"333"을 추가하라
    관찰 = true;
    /*cont.insert(++++cont.begin(), "333");*/

    /*auto point = cont.begin();
    std::advance(point, 2);
    cont.insert(point, "333");*/

    cont.emplace(++++cont.begin(), "333");
    관찰 = false;

    for (const STRING& s : cont) {
        std::cout << s << std::endl;
    }

 	save("main.cpp");
}

