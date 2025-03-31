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
#include "save.h"
 
std::random_device rd;
std::default_random_engine dre{ rd() };
std::uniform_int_distribution uid(0, 999'9999);
// [����] ���� ������ [0,1'000'0000) ������ random int�� õ ������ ������ 
// �޸𸮸� Ȯ���ϰ� ���� ä����
// (����) qsort�� �������� �����϶�.
// ������ ��� �߿��� �տ��� ���� 1000���� ȭ�� ����϶�
 
std::array<int, 1000'0000> numbers;

int ��������(const void* a, const void* b);
int ��������(const void* a, const void* b);

int main( ) 
{

	// �� ���� ���ܻ���
	// int[10] a;   X
	// int(*)(const void*,const void*) fp;   X


	int (*���Ĺ��)(const void*, const void*);
	//std::unique_ptr<std::array<int, 1000'0000>> numbers{ new std::array<int,1000'0000> };
	for (int& num : numbers) {
		num = uid(dre);
	}
	
	if(numbers[0] %2 == 1)���Ĺ�� = ��������;
	else ���Ĺ�� = ��������;

	qsort(numbers.data(), numbers.size(), sizeof(int), ���Ĺ��);
	for (int& num : numbers | std::views::take(1000))
	{
		std::print("{:8}", num);
		//std::cout << numbers[i];
	}

	save("main.cpp");

}

int ��������(const void* a, const void* b)
{
	int A = *(int*)a;
	int B = *(int*)b;
	if (A < B) return -1;
	else if (B < A) return 1;
	return 0;
}

int ��������(const void* a, const void* b)
{
	int A = *(int*)a;
	int B = *(int*)b;
	if (A < B) return 1;
	else if (B < A) return -1;
	return 0;
}
