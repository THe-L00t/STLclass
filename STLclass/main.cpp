//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					3�� 10�� ������		(3�� 2��)
//---------------------------------------------------------------------------//
//
//	���� ���� �ڷḦ �ٷ�� - int �� �޸� ũ�� �״�� �����ؾ�~
// 
//---------------------------------------------------------------------------
//
// 
#include <iostream>	// ��� ������ ��ü �ڵ带 �����´�. �ּ��� ��� �����. 
#include <random>
#include <fstream>
#include <array>
#include <print>
#include "save.h"

// �����Ϸ��� ����

// [����] "int 1000��.txt" ���Ͽ��� ���� ū ���� ã�� ȭ�鿡 ����϶�.
// ��µ� ���� ������ ����� 

std::default_random_engine dre{ };				//���� �̾Ƴ���
std::uniform_int_distribution uid{0,9'999'999};	//�����Ѵ�.

int main( char argc, char* argv) 
{
	
	std::ifstream in{ "��¥ ���� 10����",std::ios::binary };

	std::array<int, 10'0000> arr;

	in.read((char*)arr.data(), sizeof(int) * arr.size());
	
	std::pair res = std::minmax_element(arr.begin(), arr.end());
	std::cout << "�ּڰ� - " << *res.first << "�ִ� - " << *res.second << std::endl;

	save("main.cpp");
}

// STL�̶� �������ҿ� ����ϱ�
// �ּ� �ڿ��� �ּ� ���

