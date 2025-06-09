//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 목 910					6월 5일 목요일		(13주 2일)
// 2025. 6. 19 기말 시험
// 2025. 5. 12 월요일 - 졸업작품 중간발표
//---------------------------------------------------------------------------//
//  Unordered Associative Container - hash 기반
//  
//  
//---------------------------------------------------------------------------
//
// 
#include <iostream>
#include <unordered_set>
#include <string>
#include <print>
#include "save.h"
#include "STRING.h"

extern bool 관찰;

// const consistency
template<>
struct std::hash<STRING> {
    size_t operator()(const STRING& t)const {
        return std::hash<std::string>{}(std::string(t.begin(),t.end()));//STRING 을 std::string으로 바꾸어 가능하면 이상적이다. ;
    }
};

int main( ) 
{
    std::unordered_set<STRING> us{ "1", "22", "333", "4444"};

    // 언오더드 셋의 메모리 구조를 그대로 화면에 출력한다. 
    // VS는 vector[N] + list *N
    while (true) {
        for (size_t bc = 0; bc < us.bucket_count(); ++bc) {
            std::print("[{:3}]", bc);
            for (auto i = us.begin(bc); i not_eq us.end(bc); ++i) {
                std::print(" <-> {:}", std::string(i->begin(), i->end()));  //양방향 리스트이다.
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
        std::cout << "추가할 STRING을 입력하세요 : ";
        STRING s;
        std::cin >> s;
    }

 	save("main.cpp");
}

