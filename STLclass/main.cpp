//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					6�� 16�� ������		(15�� 1��)
// 2025. 6. 19 �⸻ ����
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

extern bool ����;

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

