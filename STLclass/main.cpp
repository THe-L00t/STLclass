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


int main( ) 
{
    std::unordered_set<std::string> us{ "1", "22", "333", "4444"};

    us.insert("55555");
    for (const std::string& s : us) {
        std::cout << s << std::endl;
    }

    std::cout << std::hash<std::string>{}("55555") << std::endl;
    std::cout << std::hash<std::string>{}("4444") << std::endl;
 	save("main.cpp");
}

