//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					5�� 1�� ������		(9�� 1��)
// 2025. 6. 19 �⸻ ����
// 2025. 5. 12 ������ - ������ǰ �߰���ǥ
//---------------------------------------------------------------------------//
//
// STL containers - Contianers are objects that store other objects.
// array<T,N>   - �����ϰ� ũ�� ����
// vector<T>    - random access, []������ ����, O(1)���� ��� ���ҿ� access, O(1)�� push_back
// deaue<T>     - random access, []������ ����, O(1)���� ��� ���ҿ� access, O(1)�� push_front, push_back
// list<T>      - O(1)�� ������ ��ġ�� insert, delete�� �����ο�, �ڷᱸ���� Ȱ���h �����Լ� ����(remove, sort, splice)
//---------------------------------------------------------------------------
//
// 
#include <iostream>	
#include <algorithm>
#include <deque>
#include <list>
#include <iterator>
#include "save.h"
#include "STRING.h"

extern bool ����;


int main( ) 
{
    std::list<STRING> cont{ "1","22","4444","55555" };
    // [����]"333"�� �߰��϶�
    ���� = true;
    /*cont.insert(++++cont.begin(), "333");*/

    /*auto point = cont.begin();
    std::advance(point, 2);
    cont.insert(point, "333");*/

    cont.emplace(++++cont.begin(), "333");
    ���� = false;

    for (const STRING& s : cont) {
        std::cout << s << std::endl;
    }

 	save("main.cpp");
}

