//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 목 910					6월 5일 목요일		(13주 2일)
// 2025. 6. 19 기말 시험
// 2025. 5. 12 월요일 - 졸업작품 중간발표
//---------------------------------------------------------------------------//
//  Associative Container
//  - set<key>          : key 와 value를 구분하지 않는다.
//  - map<key, value>   : 모델링 - texture, <아이돌그룹, 멤버>
//  
//---------------------------------------------------------------------------
//
// 
#include <iostream>	
#include <fstream>
#include <map>
#include "save.h"
#include "STRING.h"

extern bool 관찰;


int main( ) 
{
    std::ifstream in{ "이상한 나라의 앨리스.txt" };
    if (not in) { return 404; }

    // [문제] 소설의 사용된 단어와 단어의 사용횟수를 알고 싶다. 
    // 다음과 같은 형식으로 출력하자
    //
    // the - 1500
    // a - 1000
    // ...
    // zigzag - 1

    std::map<STRING, size_t> 단어들;
    std::multimap<size_t, STRING, std::greater<size_t>> sorted;
    STRING temp;
    while (in >> temp) {
        단어들[temp]++;
    }
    for (auto [단어, 개수] : 단어들) {
        // sorted[개수] = 단어;  - unique key일때만 허용되는 sugar
        // 정식 :  sorted.insert(std::pair<size_t,STRING>{개수,단어});
        // 편의 :  sorted.insert(make_pair(개수,단어));
        sorted.insert({개수,단어});
    }
    for (auto [개수, 단어] : sorted) {
        std::cout << 단어 << " : " << 개수 << std::endl;
    }

 	save("main.cpp");
}

