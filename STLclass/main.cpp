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
#include <fstream>
#include <list>
#include <vector>
#include <algorithm>
#include "save.h"
#include "STRING.h"

extern bool 관찰;


int main( ) 
{
    // [문제] "main.cpp"의 단어를 list에 모두 저장하라.
    std::ifstream in{ "main.cpp" };
    if (not in) return 2024182028;

    std::list<STRING> m{ std::istream_iterator<STRING>{in},{} }; //한 줄로 줄임
    std::vector<STRING> v{ m.begin(),m.end()};
    
    관찰 = true;
    m.sort();   // list의 강점 중 하나기 때문에 list에게 시킨다. 
    관찰 = false;
    /*for (const STRING& s : v) {
        std::cout << s << std::endl;
    }*/

 	save("main.cpp");
}

