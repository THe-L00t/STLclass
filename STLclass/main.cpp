//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					4�� 3�� ������		(7�� 1��)
// 8�� 1�� �߰���� (4�� 24�� �����) - 30��
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

extern bool ����;

//[����]Ű���忡�� �ܾ ��� �Է¹޾� ������������ ������ �� ����϶�.

int main( ) 
{
    std::vector<std::string> str{ std::istream_iterator<std::string > {std::cin}, {} };
    std::sort(str.begin(), str.end());
    for (const std::string c : str)
    {
        std::cout << c << std::endl;
    }

 	save("main.cpp");
}

