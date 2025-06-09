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
    std::unordered_set<STRING,std::hash<STRING>> us{ "1", "22", "333", "4444"};

    us.insert("55555");
    for (const STRING& s : us) {
        std::cout << s << std::endl;
    }

    std::cout << std::hash<STRING>{}("55555") << std::endl;
    std::cout << std::hash<std::string>{}("55555") << std::endl;
 	save("main.cpp");
}

