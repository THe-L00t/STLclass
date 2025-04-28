//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 목 910					4월 3일 월요일		(8주 2일)
// 
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
    int a[10];
    
    for (int i = -10; i < 10; i++) //이 경우 읽기와 쓰기가 다르게 동작한다.
    {//쓰기의 경우 죽는다
        std::cout << a[i] << std::endl; //읽기의 경우 c++이 메모리 접근을 모두 허락하기에 정상적으로 동작한다.  
    }

 	save("main.cpp");
}

