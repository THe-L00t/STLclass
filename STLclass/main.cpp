//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					6�� 5�� �����		(13�� 2��)
// 2025. 6. 19 �⸻ ����
// 2025. 5. 12 ������ - ������ǰ �߰���ǥ
//---------------------------------------------------------------------------//
//  Associative Container
//  - set<key>          : key �� value�� �������� �ʴ´�.
//  - map<key, value>   : �𵨸� - texture, <���̵��׷�, ���>
//  
//---------------------------------------------------------------------------
//
// 
#include <iostream>	
#include <fstream>
#include <map>
#include "save.h"
#include "STRING.h"

extern bool ����;


int main( ) 
{
    std::ifstream in{ "�̻��� ������ �ٸ���.txt" };
    if (not in) { return 404; }

    // [����] �Ҽ��� ���� �ܾ�� �ܾ��� ���Ƚ���� �˰� �ʹ�. 
    // ������ ���� �������� �������
    //
    // the - 1500
    // a - 1000
    // ...
    // zigzag - 1

    std::map<STRING, size_t> �ܾ��;
    std::multimap<size_t, STRING, std::greater<size_t>> sorted;
    STRING temp;
    while (in >> temp) {
        �ܾ��[temp]++;
    }
    for (auto [�ܾ�, ����] : �ܾ��) {
        // sorted[����] = �ܾ�;  - unique key�϶��� ���Ǵ� sugar
        // ���� :  sorted.insert(std::pair<size_t,STRING>{����,�ܾ�});
        // ���� :  sorted.insert(make_pair(����,�ܾ�));
        sorted.insert({����,�ܾ�});
    }
    for (auto [����, �ܾ�] : sorted) {
        std::cout << �ܾ� << " : " << ���� << std::endl;
    }

 	save("main.cpp");
}

