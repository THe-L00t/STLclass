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
#include <map>
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

    std::map<char, size_t> alphaNnum;
    for (const STRING& s1 : s) {
        for (const char s2 : s1) {
            if(isalpha(s2)) alphaNnum[tolower(s2)]++;
        }
    }
    /*for (std::pair<char, size_t> p : alphaNnum) {
        std::cout << p.first << " : " << p.second << std::endl;
    }*/

    // ���� ���� ������������ ����Ѵ�. 
    std::map<int, char> numNalpha;
    for (auto [�ҹ���, ����] : alphaNnum) {
        numNalpha[����] = �ҹ���;
    }
    for (auto [����, �ҹ���] : numNalpha) {
        std::cout << �ҹ��� << " : " << ���� << std::endl;
    }

 	save("main.cpp");
}

