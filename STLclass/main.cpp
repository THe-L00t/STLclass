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
   // 똑같이 관찰된 이유 
    //iterator를 통해 일반화 되어있는 erase를 사용했기에 이전의 vector를 사용했을때와 같이 관찰됨

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

