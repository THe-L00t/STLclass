//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					5�� 1�� ������		(9�� 1��)
// 2025. 5. 5 -> ���� ���� (6/19)
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
#include "save.h"
#include "STRING.h"

extern bool ����;


int main( ) 
{
    std::vector<STRING> v{ "1","22","333","4444","55555"};
    
    // [����]v���� 3�� �����϶�

    //std::vector<int>::iterator newEnd = std::remove(v.begin(), v.end(), 3); // ���ο� end��ġ ��ȯ
    //auto newEnd = std::remove(v.begin(), v.end(), 333);
    // v.erase(newEnd, v.end());   //vector�� ���� size ����
    // v.erase(std::remove(v.begin(), v.end(), 3), v.end());   //erase-remove idiom
    // C++ 20 
    erase(v, 3);    // syntatic sugar


    for (size_t i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
 	save("main.cpp");
}

