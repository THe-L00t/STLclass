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
#include <fstream>
#include <list>
#include "save.h"
#include "STRING.h"

extern bool ����;


int main( ) 
{
    // [����] "main.cpp"�� �ܾ list�� ��� �����϶�.
    std::ifstream in{ "main.cpp" };
    if (not in) return 2024182028;

    std::list<STRING> m{ std::istream_iterator<STRING>{in},{} }; //�� �ٷ� ����
    /*STRING s;
    while (in >> s) {
        m.push_back(s);
    }*/
    for (const STRING& d : m) {
        std::cout << d << std::endl;
    }


 	save("main.cpp");
}

