//---------------------------------------------------------------------------//
// 2025.   1.  STL 岿 910 格 910					6岿 12老 格夸老		(14林 2老)
// 2025. 6. 19 扁富 矫氰
//---------------------------------------------------------------------------//
//  
//  distance 备泅 - tag dispatch, if constexpr, concept, SFINAE
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

extern bool 包蔓;


int main( ) 
{
    vector<int> v{ 1,2,3,4,5 };
    cout << distance(v.end(), v.begin()) << endl;
    list<int> l{ 1,2,3,4,5 };
    std::cout << distance(l.end(), l.begin()) << endl;
 	save("main.cpp");
}

