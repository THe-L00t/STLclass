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


int main( ) 
{
    관찰 = true;
    std::vector<STRING> v;


   //STRING s{ "12345" };
    v.emplace_back("12345"); 
    // 이동조차 하지 않고 벡터 내에서 free store에 생성자 호출
    // 사용법 emplace_back( 생성자의 인자만 );

 	save("main.cpp");
}

