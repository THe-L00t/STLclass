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
#include <fstream>
#include <print>
#include "save.h"

// �����Ϸ��� ����

// [����] "int 1000��.txt" ���Ͽ��� ���� ū ���� ã�� ȭ�鿡 ����϶�.
// ��µ� ���� ������ ����� 

std::default_random_engine dre{ };				//���� �̾Ƴ���
std::uniform_int_distribution uid{0,9'999'999};	//�����Ѵ�.

int main( char argc, char* argv) 
{
	
	std::ofstream out{"int 1000��.txt"};
	int cnt{ 0 };
	for (size_t i = 0; i < 1000;++i) {
		std::print(out, "{:8}", uid(dre));
		if (not(++cnt % 10)) out << std::endl;
	}

	{
		std::ifstream in{ "int 1000��.txt" };
		if (not in) return 404;
		while (in) {
			int temp;
			in >> temp;
			std::cout << temp << ' ';
		}
	}
	

	save("main.cpp");
}

// STL�̶� �������ҿ� ����ϱ�
// �ּ� �ڿ��� �ּ� ���

