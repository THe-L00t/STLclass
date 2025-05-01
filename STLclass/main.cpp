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
#include "save.h"
#include "STRING.h"

extern bool 관찰;


int main( ) 
{
    std::vector<STRING> v{ "1","22","333","4444","55555"};
    
    // [문제]v에서 3을 제거하라

    //std::vector<int>::iterator newEnd = std::remove(v.begin(), v.end(), 3); // 새로운 end위치 반환
    //auto newEnd = std::remove(v.begin(), v.end(), 333);
    // v.erase(newEnd, v.end());   //vector를 통해 size 조정
    // v.erase(std::remove(v.begin(), v.end(), 3), v.end());   //erase-remove idiom
    // C++ 20 
    erase(v, 3);    // syntatic sugar


    for (size_t i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
 	save("main.cpp");
}

