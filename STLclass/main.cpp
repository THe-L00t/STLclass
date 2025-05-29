//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					5�� 19�� ������		(12�� 2��)
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
// 1. ������ vector<STRING> v;�� �����϶�.
// 2. ��� �� �ܾ�� ��������� ����϶�.

int main( ) 
{
    std::ifstream in{ "�̻��� ������ �ٸ���.txt" };
    if (not in) { return 404; }

    std::set<STRING> v{ std::istream_iterator<STRING>{in}, std::istream_iterator<STRING>{} };
    std::cout << "�� " << v.size() << "�ܾ� �Դϴ�. " << std::endl;

    // while ����� ���� ���� ���غ��� 
    //reserve �� �ٲ� ���غ��� 

 	save("main.cpp");
}

