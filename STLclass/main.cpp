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
#include <vector>
#include <list>
#include <algorithm>
#include <ranges>
#include "save.h"
#include "STRING.h"

using namespace std;

extern bool ����;


int main( ) 
{
    // ���� ��(lazy-evaluation)
    for (int num : views::iota(1))  // 1���� �����ϴ� ������ ranges�� ����
        cout << num << " ";
    for (int num : views::iota(1) | views::take(1000))  // 1000���� ���
        cout << num << " ";
    for (int num : views::iota(1) | views::take_while([](int num){ return num&1;}))  // Ȧ���� ���ö������� ���, predicate�̿�
        cout << num << " ";
    for (int num : views::iota(1) | views::reverse)  // �Ųٷ� ���
        cout << num << " ";
 	save("main.cpp");
}

