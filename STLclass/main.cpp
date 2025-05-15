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
#include <fstream>
#include <list>
#include <vector>
#include <algorithm>
#include "save.h"
#include "STRING.h"

extern bool ����;

int main( ) 
{
    // [����] "main.cpp"�� �ܾ list�� ��� �����϶�.
    std::ifstream in{ "main.cpp" };
    if (not in) return 2024182028;

    std::list<STRING> m{ std::istream_iterator<STRING>{in},{} }; //�� �ٷ� ����
    
    // [����] ã�� �ܾ ������ �� ��°���� ��� 
    std::cout << "ã�� �ܾ� : ";
    STRING �ܾ�;
    std::cin >> �ܾ�;

    auto ��ġ = std::find(m.begin(), m.end(), �ܾ�);
    if (��ġ == m.end()) { 
        std::cout << "���� �ܾ� �Դϴ�. " << std::endl; 
    }
    else {
        std::cout << �ܾ� << "�� " << std::distance(m.begin(), ��ġ) + 1 << "��° �ܾ� �Դϴ�." << std::endl;
        // ���� �ð� �ۼ��� for���� �ڵ带 ��� ���� ����
    }

 	save("main.cpp");
}

