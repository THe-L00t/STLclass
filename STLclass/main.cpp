//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 목 910					4월 3일 월요일		(7주 1일)
// 8주 1일 중간고사 (4월 24일 목요일) - 30점
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
#include <memory>
#include <string>
#include <algorithm>
#include <fstream>
#include "save.h"
#include "STRING.h"

extern bool 관찰;

//[문재]키보드에서 단어를 모두 입력받아 오름차순으로 정렬한 후 출력하라.

int main( ) 
{
    std::vector<std::string> str{ std::istream_iterator<std::string > {std::cin}, {} };
    std::sort(str.begin(), str.end());
    for (const std::string c : str)
    {
        std::cout << c << std::endl;
    }

 	save("main.cpp");
}

