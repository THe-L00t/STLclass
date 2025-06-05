//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 목 910					6월 2일 월요일		(13주 1일)
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
#include <vector>
#include <set>
#include <algorithm>
#include <array>
#include "save.h"
#include "STRING.h"

extern bool 관찰;


int main( ) 
{
    std::ifstream in{ "이상한 나라의 앨리스.txt" };
    if (not in) { return 404; }

    std::multiset<STRING> s{ std::istream_iterator<STRING>{in}, {} };
    std::cout << "총 " << s.size() << "단어 입니다. " << std::endl;
    // [문제] multiset에 저장된 모든 알파벳의 사용횟수를 내림차순으로 출력하자.
    // 대문자는 소문자로 바꾸어 취급한다. 

    std::array<size_t, 26> temp{ };

    for (const STRING& c : s) {
        for (const char& c2 : c) {
            if (isalpha(c2)) {
                temp[tolower(c2) - 'a']++;
            }
        }
    }
    int a = 'a';
    for (size_t& i : temp) {
        std::cout << static_cast<char>(a++)<< "의 개수 - " << i << std::endl;
    }


 	save("main.cpp");
}

