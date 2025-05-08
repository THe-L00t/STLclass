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
#include "save.h"
#include "STRING.h"

extern bool ����;


int main( ) 
{
    std::deque<int> d{ 1,2,3,4 };

	d.push_front(0);
	d.push_front(-1);
	d.push_back(5);
	d.push_back(6);

	for (int i = 0; i < d.size(); i++)
	{
		std::cout << std::addressof( d[i]) <<std::endl;
	}

	// deque�� �ε����� vector���� ���� ������.

 	save("main.cpp");
}

