//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					6�� 12�� �����		(14�� 2��)
// 2025. 6. 19 �⸻ ����
//---------------------------------------------------------------------------//
//  
//  STL sort ���� �˰��� - ���⵵ ������� 
//  1. partition
//  2. nth_element
//  3. partial_sort
//  4. sort
//  5. stable_sort
//  6. 
// 
//---------------------------------------------------------------------------
// ���� ���� : adjacent_find
// 
#include <iostream>
#include <vector>
#include <algorithm>
#include <print>
#include <random>
#include <numeric>
#include "save.h"
#include "STRING.h"

using namespace std;
std::default_random_engine dre{ std::random_device{}()};
extern bool ����;

int main( ) 
{
    vector<int> v(100);
    iota(v.begin(), v.end(),1);
    {
        shuffle(v.begin(), v.end(),dre);
        cout << "partition�ϱ� ��" << endl;
        for (int i : v)
            print("{:8}", i);
        std::cout << endl;
        //���ڿ� ���׶�̰� �ִ� ���ڿ� �ƴ� ���� �и�
        cout << "Ȧ���� ¦���� �и�" << endl;
        auto position = partition(v.begin(), v.end(), [](int num) {
            return num & 1;
            });
        cout << "Ȧ��" << endl;
        for (auto i = v.begin(); i < position; ++i) 
            print("{:8}", *i);
        std::cout << endl;
        cout << "Ȧ��" << endl;
        for (auto i = position; i < v.end(); ++i)
            print("{:8}", *i);
        std::cout << endl;
    }
 	save("main.cpp");
}

