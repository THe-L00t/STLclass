//---------------------------------------------------------------------------//
// 2025.   1.  STL 岿 910 格 910					4岿 3老 岿夸老		(7林 1老)
// 8林 1老 吝埃绊荤 (4岿 24老 格夸老) - 30痢
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

extern bool 包蔓;


int main( ) 
{
    包蔓 = true;
    std::vector<STRING> v;


    STRING s{ "12345" };
    v.push_back(s);

 	save("main.cpp");
}

