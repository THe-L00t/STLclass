//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					5�� 12�� ������		(10�� 1��)
// 2025. 6. 19 �⸻ ����
// 2025. 5. 12 ������ - ������ǰ �߰���ǥ
//---------------------------------------------------------------------------//
//
// STL containers - Contianers are objects that store other objects.
// array<T,N>   - �����ϰ� ũ�� ����
// vector<T>    - random access, []������ ����, O(1)���� ��� ���ҿ� access, O(1)�� push_back
// deaue<T>     - random access, []������ ����, O(1)���� ��� ���ҿ� access, O(1)�� push_front, push_back
// list<T>      - O(1)�� ������ ��ġ�� insert, delete�� �����ο�, �ڷᱸ���� Ȱ���h �����Լ� ����(remove, sort, splice)
// forward_list<T> 
//              - It is intended that forward_list have zero space or time overheaad relative to a hand-written 
//              C-style singly linked list.
//              Features that would conflict with that goal have been omitted 
//---------------------------------------------------------------------------
//
// 
#include <iostream>	
#include <list>
#include <string>
#include "save.h"
#include "STRING.h"

extern bool ����;

int main( ) 
{
    std::list<STRING> ����1{ "3333333", "9", "777", "55555", "111111111"};
    std::list<STRING> ����2{ "0000000000", "88", "444444", "6666", "22222222"};

    ����1.sort();
    ����2.sort();
    // ǥ�� string�� ������ ����

    // ���ĵ� �˰��򿡼� ���ư���.
    ����1.merge(����2);

    for (const STRING& s : ����1) {
        std::cout << s << std::endl;
    }

 	save("main.cpp");
}

