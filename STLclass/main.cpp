//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					5�� 19�� ������		(12�� 1��)
// 2025. 6. 19 �⸻ ����
// 2025. 5. 12 ������ - ������ǰ �߰���ǥ
//---------------------------------------------------------------------------//
//  �ݺ��ڿ� �˰���
//  find() 
//  find_if()
//  copy()
//---------------------------------------------------------------------------
//
// 
#include <iostream>	
#include <algorithm>
#include "save.h"
#include "STRING.h"

extern bool ����;
template<class It, class T>
const It& my_find(const It& s, const It& e, const T& val) {
    It now = s;
    while (now != e) {
        if (*now == val) return now;
        ++now;
    }
    return now;
}

// SFINAE : constexpr �� ���� ����

int main( ) 
{
    STRING s{ "2025. 5. 26" };
    //[����] 3���� ū ���ڸ� ã�ƶ�.
    

 	save("main.cpp");
}

