//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					6�� 12�� �����		(14�� 2��)
// 2025. 6. 19 �⸻ ����
//---------------------------------------------------------------------------//
//  
//  distance ���� - tag dispatch, if constexpr, concept, SFINAE
//---------------------------------------------------------------------------
// 
// 
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "save.h"
#include "STRING.h"

using namespace std;

extern bool ����;


int main( ) 
{
    vector<int> v{ 1,2,3,4,5 };
    cout << distance(v.begin(), v.end()) << endl;
    list<int> l{ 1,2,3,4,5 };
    std::cout << distance(l.begin(), l.end()) << endl;
 	save("main.cpp");
}

