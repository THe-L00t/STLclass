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
#include <random>
#include <array>
#include <map>
#include "save.h"
#include "STRING.h"

extern bool ����;

std::default_random_engine dre;
std::uniform_int_distribution uid{ 0,99'9999 };
std::normal_distribution nd;  //����� double��

// [����] uniform ������ uniform �Ѱ�?
// [����] normal ������ normal �Ѱ�?

std::array<int, 2025'0605> a;

int main( ) 
{
    for (int& i : a) {
        double temp = nd(dre) * 20'0000 + 55'5555;
        
        if(0<= temp && temp < 99'9999) i = temp;
    }
    std::map<int, size_t> ����;
    for (int i : a) {
        ����[i / 5'0000]++;
    }
    for (auto [����, ����] : ����) {
        std::cout << ���� << "\t - " << ���� << std::endl;
    }

 	save("main.cpp");
}

