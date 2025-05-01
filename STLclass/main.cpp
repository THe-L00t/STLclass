//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 목 910					5월 1일 월요일		(9주 1일)
// 2025. 5. 5 -> 추후 보강 (6/19)
//---------------------------------------------------------------------------//
//
// STL containers - Contianers are objects that store other objects.
// array
// vector
//---------------------------------------------------------------------------
//
// 
#include <iostream>	
#include <vector>
#include <algorithm>
#include <list>
#include "save.h"
#include "STRING.h"

extern bool 관찰;


int main( ) 
{
    std::list<STRING> v{ "1","22","333","4444","55555"};
    
    // [문제]v에서 3을 제거하라

    //std::vector<int>::iterator newEnd = std::remove(v.begin(), v.end(), 3); // 새로운 end위치 반환
    //auto newEnd = std::remove(v.begin(), v.end(), 333);
    // v.erase(newEnd, v.end());   //vector를 통해 size 조정
    // v.erase(std::remove(v.begin(), v.end(), 3), v.end());   //erase-remove idiom
    // C++ 20 

    std::cout << "리스트의 크기 " << sizeof v << std::endl;

    관찰 = true;
    erase(v, "333");    // syntatic sugar
    관찰 = false;

    for (const STRING& s : v) {
        std::cout << s << std::endl;
    }
    std::cout << std::endl;
 	save("main.cpp");
}

