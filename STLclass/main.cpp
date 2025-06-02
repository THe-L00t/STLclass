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
#include "save.h"
#include "STRING.h"

extern bool ����;
// [����] �̻��� ������ �ٸ���.txt�� �ٿ�޴´�.
// 1. ������ set<STRING> s;�� �����϶�.
// 2. ��� �� �ܾ�� ��������� ����϶�.

int main( ) 
{
    std::ifstream in{ "�̻��� ������ �ٸ���.txt" };
    if (not in) { return 404; }

    std::set<STRING> s{ std::istream_iterator<STRING>{in}, std::istream_iterator<STRING>{} };
    std::cout << "�� " << s.size() << "�ܾ� �Դϴ�. " << std::endl;

    // while ����� ���� ���� ���غ��� 
    //reserve �� �ٲ� ���غ��� 

 	save("main.cpp");
}

