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

template<class T>
struct less {   // functional object : �Լ�ȣ���� ������ ��ü 
    bool operator()(const T& lhs, const T& rhs) {
       return lhs.size() < rhs;
    }
};
// ���ø��� Ư��ȭ �� �� �ִ�. 
//struct less<STRING> {  
//    bool operator()(const STRING& lhs, const STRING& rhs) {
//        return lhs < rhs;
//    }
//};


int main( ) 
{
    std::ifstream in{ "�̻��� ������ �ٸ���.txt" };
    if (not in) { return 404; }

    // ��Ʈ������ �о�� �� �ֵ��� ������ �����ε� �صξ� ����
    std::set<STRING> s{ std::istream_iterator<STRING>{in}, {} };
    // �̶� ����� ���� �ڷ��� STRING�� �����ϴ� set�� 
    // 1. less<STRING> �� ã�´�.
    // 2. operator<�� ã�´�. 

    std::cout << "�� " << s.size() << "�ܾ� �Դϴ�. " << std::endl;

    // while ����� ���� ���� ���غ��� 
    //reserve �� �ٲ� ���غ��� 

 	save("main.cpp");
}

