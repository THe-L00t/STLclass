//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					5�� 19�� ������		(12�� 2��)
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
#include <vector>
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

template<class It, class T>
const It& my_find_if(const It& s, const It& e, T callable) {
    It now = s;
    while (now != e) {
        if (callable(*now)) return now; // ������Ŷ : �Ǵ����ִ� ��
        ++now;
    }
    return now;
}

// SFINAE : constexpr �� ���� ����

int main( ) 
{
    STRING s{ "2025. 5. 29" };

    //[����] s�� ���ڸ� ȭ�鿡 ���� 

    std::copy(s.begin(), s.end(), std::ostream_iterator<char>{std::cout});
    std::cout << std::endl;

 	save("main.cpp");
}

