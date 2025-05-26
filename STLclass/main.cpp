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
    //[����] �� ���ڸ� �Է¹޾� s�� �ִ��� ������, �ִٸ� �� ��° �������� ����϶�
    char c{};
    std::cin >> c;
    auto p = my_find(s.begin(), s.end(), c);
    // �ش� �Լ��� �ϼ��϶� 

    if(p != s.end())  std::cout << std::distance(s.begin(), p) + 1 << "��° �Դϴ�." << std::endl;
    else  std::cout << "���� ���� �Դϴ�." << std::endl;
    //STRING_Iterator cusor = std::find(s.begin(), s.end(), c);
    //if (cusor != s.end()) {
    //    //// random access iterator tag ��� 
    //    //std::cout << cusor - s.begin() + 1 << "��° �Դϴ�." << std::endl;
    //    ////�ƴ϶�� ������ �� ���ư��� �Ѵ�. 
    //    //���� ���� ���� �ϴ� ���� distance�Լ� �̴�. 
    //    std::cout << std::distance(s.begin(), cusor) + 1 << "��° �Դϴ�." << std::endl;
    //}
    //else {
    //    std::cout << "���� ���� �Դϴ�." << std::endl;
    //}

 	save("main.cpp");
}

