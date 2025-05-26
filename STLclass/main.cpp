//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 목 910					5월 19일 월요일		(12주 1일)
// 2025. 6. 19 기말 시험
// 2025. 5. 12 월요일 - 졸업작품 중간발표
//---------------------------------------------------------------------------//
//  반복자와 알고리즘
//  find() 
//  find_if()
//  copy()
//---------------------------------------------------------------------------
//
// 
#include <iostream>	
#include <algorithm>
#include "save.h"
#include "STRING.h"

extern bool 관찰;


int main( ) 
{
    STRING s{ "2025. 5. 26" };
    //[문제] 한 글자를 입력받아 s에 있는지 없는지, 있다면 몇 번째 글자인지 출력하라
    char c{};
    std::cin >> c;
    STRING_Iterator cusor = std::find(s.begin(), s.end(), c);
    if (cusor != s.end()) {
        //// random access iterator tag 라면 
        //std::cout << cusor - s.begin() + 1 << "번째 입니다." << std::endl;
        ////아니라면 개수를 세 나아가야 한다. 
        //위와 같은 일을 하는 것이 distance함수 이다. 
        std::cout << std::distance(s.begin(), cusor) + 1 << "번째 입니다." << std::endl;
    }
    else {
        std::cout << "없는 문자 입니다." << std::endl;
    }

 	save("main.cpp");
}

