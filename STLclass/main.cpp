//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					6�� 16�� ������		(15�� 1��)
// 2025. 6. 19 �⸻ ����
//---------------------------------------------------------------------------//
//  
//  concepts - compile-time�� template �Լ��� ���޵� ����(Ÿ��, non-type)�� 
//  concept�� �´��� �ƴ��� �Ǵ��ϱ� ���� C++����� ����
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
concept ableAdd = integral<T> or floating_point<T> or same_as < typename string, T > ;

template<ableAdd T>
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

