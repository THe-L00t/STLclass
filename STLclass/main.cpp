//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					5�� 19�� ������		(11�� 1��)
// 2025. 6. 19 �⸻ ����
// 2025. 5. 12 ������ - ������ǰ �߰���ǥ
//---------------------------------------------------------------------------//
//  �ݺ��� - Iterators are a generalization of pointers that allow a C++ program to work 
// with different data structures in a uniform manner.
// 
// ������ �ݺ��ڴ� �ݵ�� class�� �ڵ��ؾ߸� �Ѵ�.
//---------------------------------------------------------------------------
//
// 
#include <iostream>	
#include <span>
#include "save.h"
#include "STRING.h"

extern bool ����;

int main( ) 
{
    STRING s{ "2025. 5. 15" };
    
    // [����] s�� �Ųٷ� ����϶� 

    for (auto i = std::rbegin(s); i != std::rend(s); ++i) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;

 	save("main.cpp");
}

