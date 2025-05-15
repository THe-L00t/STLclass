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
//---------------------------------------------------------------------------
//
// 
#include <iostream>	
#include <list>
#include "save.h"
#include "STRING.h"

extern bool ����;

int main( ) 
{
    std::list<STRING> ����1{ "�ư�����", "����", "������", "��ǻ�� ����"};
    std::list<STRING> ����2{ "��������", "���� �μ��ΰ�", "��ħ", "����"};

    ����1.merge(����2);

    for (const STRING& s : ����2) {
        std::cout << s << std::endl;
    }

 	save("main.cpp");
}

