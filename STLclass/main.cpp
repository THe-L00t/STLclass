//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					3�� 10�� ������		(4�� 2��)
//---------------------------------------------------------------------------//
//
//	Callable types - ȣ�Ⱑ���� Ÿ��
//  1. �Լ�
// 
//---------------------------------------------------------------------------
//
// 
#include <iostream>	
#include <array>
#include <algorithm>
#include <random>
#include <print>
#include <ranges>
#include <chrono>
#include "save.h"
 
std::random_device rd;
std::default_random_engine dre{ rd() };
std::uniform_int_distribution uid(0, 999'9999);
// [����] ���� ������ [0,1'000'0000) ������ random int�� õ ������ ������ 
// �޸𸮸� Ȯ���ϰ� ���� ä����
// (����) qsort�� �������� �����϶�.
// ������ ��� �߿��� �տ��� ���� 1000���� ȭ�� ����϶�
 
std::array<int, 1000'0000> numbers;
bool ��������(int a, int b)
{
	return a > b;
}

int main( ) 
{

	for (int& num : numbers) {
		num = uid(dre);
	}

	//STL�� sort ����
	//���Ŀ� �ɸ��� �ð�
	auto b = std::chrono::high_resolution_clock::now();//�����ġ ����
	sort(numbers.begin(), numbers.end(),�������� );	// generic, contiguous
	auto e = std::chrono::high_resolution_clock::now();//�����ġ ��

	for (int& num : numbers | std::views::take(1000))
	{
		std::print("{:8}", num);
	}

	std::cout << std::endl << "����ð� - " << e-b << std::endl;
	save("main.cpp");

}

