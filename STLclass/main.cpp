//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 목 910					6월 16일 월요일		(15주 1일)
// 2025. 6. 19 기말 시험
//---------------------------------------------------------------------------//
//  
//  concepts - 
//---------------------------------------------------------------------------
// 
// 
#include <iostream>
#include <string>
#include "save.h"
#include "STRING.h"

using namespace std;

extern bool 관찰;

template<class T>
T add(T a, T b) {
    return a + b;
}

int main( ) 
{
    cout << add(1, 2) << endl;
    cout << add(1.2, 3.4) << endl;
    cout << add("2025"s, ".06.16"s) << endl;
 	save("main.cpp");
}

