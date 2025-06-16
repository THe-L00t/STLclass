//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					6�� 16�� ������		(15�� 1��)
// 2025. 6. 19 �⸻ ����
//---------------------------------------------------------------------------//
//  
//  distance ���� - tag dispatch, if constexpr, concept, SFINAE
//---------------------------------------------------------------------------
// 
// 
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <concepts>
#include "save.h"
#include "STRING.h"

using namespace std;

extern bool ����;

template<class It>
iterator_traits<It>::difference_type my_distance(It b, It e) 
{
    // �ݺ��ڰ� random access �ݺ��ڶ�� 
    // c++ 20�� concepts�� ����ϸ� ���� �ݺ����� Ÿ���� �� �� �ִ�. 
    if (random_access_iterator<It>) {
        return e - b;
    }
    else {
        typename iterator_traits<It>::difference_type  d{}; //typename�� �̿��� �ڷ������� ���
        while (b not_eq e) {
            ++b;
            ++d;
        }
        return d;
    }
}   // tag dispatch ���� ��쿡 ���� �Լ��� ȣ��

int main( ) 
{
    vector<int> v{ 1,2,3,4,5 };
    cout << my_distance(v.begin(), v.end()) << endl;
    list<int> l{ 1,2,3,4,5 };
    std::cout << my_distance(l.begin(), l.end()) << endl;
 	save("main.cpp");
}

