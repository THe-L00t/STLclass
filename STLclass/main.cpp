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
//---------------------------------------------------------------------------
//
// 
#include <iostream>	
#include <list>
#include "save.h"
#include "STRING.h"

extern bool 관찰;

int main( ) 
{
    std::list<STRING> 할일1{ "아가리오", "게임", "설겆이", "컴퓨터 구조"};
    std::list<STRING> 할일2{ "과제제출", "조명 인수인계", "취침", "등등등"};

    할일1.merge(할일2);

    for (const STRING& s : 할일2) {
        std::cout << s << std::endl;
    }

 	save("main.cpp");
}

