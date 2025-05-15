//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 목 910					5월 12일 월요일		(10주 1일)
// 2025. 6. 19 기말 시험
// 2025. 5. 12 월요일 - 졸업작품 중간발표
//---------------------------------------------------------------------------//
//
// STL containers - Contianers are objects that store other objects.
// array<T,N>   - 유일하게 크기 고정
// vector<T>    - random access, []연산자 제공, O(1)내에 모든 원소에 access, O(1)에 push_back
// deaue<T>     - random access, []연산자 제공, O(1)내에 모든 원소에 access, O(1)에 push_front, push_back
// list<T>      - O(1)에 임의의 위치에 insert, delete가 자유로움, 자료구조를 활동햔 전용함수 제공(remove, sort, splice)
// forward_list<T> 
//              - It is intended that forward_list have zero space or time overheaad relative to a hand-written 
//              C-style singly linked list.
//              Features that would conflict with that goal have been omitted 
//---------------------------------------------------------------------------
//
// 
#include <iostream>	
#include <list>
#include <string>
#include "save.h"
#include "STRING.h"

extern bool 관찰;

int main( ) 
{
    std::list<STRING> 할일1{ "3333333", "9", "777", "55555", "111111111"};
    std::list<STRING> 할일2{ "0000000000", "88", "444444", "6666", "22222222"};

    할일1.sort();
    할일2.sort();
    // 표준 string은 사전식 정렬

    // 정렬된 알고리즘에서 돌아간다.
    할일1.merge(할일2);

    for (const STRING& s : 할일1) {
        std::cout << s << std::endl;
    }

 	save("main.cpp");
}

