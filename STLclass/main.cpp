//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					6�� 2�� ������		(13�� 1��)
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
#include <vector>
#include <set>
#include <algorithm>
#include <array>
#include "save.h"
#include "STRING.h"

extern bool ����;


int main( ) 
{
    std::ifstream in{ "�̻��� ������ �ٸ���.txt" };
    if (not in) { return 404; }

    std::multiset<STRING> s{ std::istream_iterator<STRING>{in}, {} };
    std::cout << "�� " << s.size() << "�ܾ� �Դϴ�. " << std::endl;
    // [����] multiset�� ����� ��� ���ĺ��� ���Ƚ���� ������������ �������.
    // �빮�ڴ� �ҹ��ڷ� �ٲپ� ����Ѵ�. 

    std::array<size_t, 26> temp{ };

    for (const STRING& c : s) {
        for (const char& c2 : c) {
            if (isalpha(c2)) {
                temp[tolower(c2) - 'a']++;
            }
        }
    }
    int a = 'a';
    for (size_t& i : temp) {
        std::cout << static_cast<char>(a++)<< "�� ���� - " << i << std::endl;
    }


 	save("main.cpp");
}

