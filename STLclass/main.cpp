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
#include "save.h"
#include "STRING.h"

extern bool ����;
// [����] �̻��� ������ �ٸ���.txt�� �ٿ�޴´�.
// 1. ������ set<STRING> s;�� �����϶�.
// 2. ��� �� �ܾ�� ��������� ����϶�.

//template<class T>
//struct less {   // functional object : �Լ�ȣ���� ������ ��ü 
//    bool operator()(const T& lhs, const T& rhs) {
//       return lhs.size() < rhs;
//    }
//};
// ���ø��� Ư��ȭ �� �� �ִ�.
//template<>
//struct std::less<STRING> {  
//    bool operator()(const STRING& lhs, const STRING& rhs) const{
//        return lhs.size() < rhs.size();
//    }
//};


int main( ) 
{
    std::ifstream in{ "�̻��� ������ �ٸ���.txt" };
    if (not in) { return 404; }

    // multiset�̸� �ߺ� �����Ѵ�. 
    std::multiset<STRING> s{ std::istream_iterator<STRING>{in}, {} };
    //less �ڸ����� ȣ�Ⱑ�� Ÿ���̶�� �����̵� �� �� �ִ�. 

    std::cout << "�� " << s.size() << "�ܾ� �Դϴ�. " << std::endl;
    // [����] �ܾ �Է¹޾Ƽ� �� �ܾ �ִ��� �˷�����  
    /*for (const STRING& c : s) {
        std::cout << c << " ";
    }*/

    while (true) {
        std::cout << "ã�� �ܾ �Է��ϼ���" << std::endl;
        STRING �ܾ�;
        std::cin >> �ܾ�;

        auto ���� = s.count( �ܾ�);
        // �̰� �Ʒ��� �ڵ带 �����صа��̴�. 

        std::pair<std::multiset<STRING>::const_iterator, std::multiset<STRING>::const_iterator> underNupper= s.equal_range(�ܾ�);
        std::cout << std::distance(underNupper.first, underNupper.second) << std::endl;
        if (���� != 0) {
            
            std::cout << ���� << "�� ���� �����Դϴ�. " << std::endl;
        }
        else std::cout << "��� �� �� �����ϴ�." << std::endl;

 
    }






 	save("main.cpp");
}

