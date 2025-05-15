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
    
    // [문제] 찾을 단어가 있으면 몇 번째인지 출력 
    std::cout << "찾을 단어 : ";
    STRING 단어;
    std::cin >> 단어;

    auto 위치 = std::find(m.begin(), m.end(), 단어);
    if (위치 == m.end()) { 
        std::cout << "없는 단어 입니다. " << std::endl; 
    }
    else {
        std::cout << 단어 << "는 " << std::distance(m.begin(), 위치) + 1 << "번째 단어 입니다." << std::endl;
        // 지난 시간 작성한 for루프 코드를 대신 수행 해줌
    }

 	save("main.cpp");
}

