//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					3�� 10�� ������		(2�� 2��)
//---------------------------------------------------------------------------//
//
//	���� ���� �ڷḦ �ٷ�� - int 
// 
//---------------------------------------------------------------------------
//
// 
#include <iostream>	// ��� ������ ��ü �ڵ带 �����´�. �ּ��� ��� �����. 
#include <random>
#include <print>
#include <array>
#include <algorithm>
#include "save.h"

// �����Ϸ��� ����

// ���� int�� 1000���� �޸𸮿� �����϶� 
// ������ �� �߿��� ���� ū ���� �������� ã�� ȭ�鿡 ����϶� 
// ��µ� ���� ��������� ��� 

std::default_random_engine dre{ };
//std::mt19937_64 dre;								//���� �̾Ƴ���
std::uniform_int_distribution uid{0,9'999'999};	//�����Ѵ�.

int main( char argc, char* argv) 
{
	std::array<int, 1'000> n;	// T[n] --> array<T,n> ;
	
	//	�Ϲ����� for���̶�� hard_wired coding�̴�. �̶� ���� 1000�̶�� ���ڴ� magic number.
	for (int& a : n) {
		a = uid(dre);
	}

	//int max = -1;		//numeric_limits<int>::min(); �̿��ϱ� 
	//for (const int& a : n) {
	//	std::print("{:8}", a);	
	//	if (max < a) max = a;
	//}
	//// ^ �ִ��� ã�� �˰��� O(n)

    auto pos = std::max_element(n.begin(), n.end());
	std::cout << "���� ū �� " << *pos << std::endl;
	save("main.cpp");
}

// STL�̶� �������ҿ� ����ϱ�
// �ּ� �ڿ��� �ּ� ���

