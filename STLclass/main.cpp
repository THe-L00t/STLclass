//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					3�� 10�� ������		(4�� 1��)
//---------------------------------------------------------------------------//
//
//	RAII �� smart pointer 
// 
//---------------------------------------------------------------------------
//
// 
#include <iostream>	
#include <numeric>
#include "save.h"

// [����] ���� ����(int�� �ִ�)�� �Է¹޾� num�� �����϶� 
// int���� num�� ������ �� �ִ� �޸𸮸� Ȯ���϶�.
// �޸��� ������ 1���� �����ϴ� ������ ä����. 
// �޸𸮿� �ִ� ���� �հ踦 ȭ�鿡 ����϶�
// �� ������ ������ �ݺ��϶� 


int main( ) 
{

	save("main.cpp");
	while (true) {
		std::cout << "���� ������ �Է��϶� : ";
		int num;
		std::cin >> num;
		if (num < 1) {
			std::cout << " �ٽ� �Է��ϼ��� " << std::endl;
		}
		else {
			//std::unique_ptr<int> numbers{ new int[num]() };
			int* numbers = new int[num];
			//__int64 sum;
			std::cout << std::numeric_limits<long long>::max() << std::endl;
			
			std::iota(numbers, numbers + num, 1);
			long long sum = std::accumulate(numbers, numbers + num, 0LL);
			/*for (size_t i = 0; i < num; i++)
			{
				sum += numbers[i];
			}*/
			std::cout << "1���� " << num << "������ �հ� - " << sum << std::endl;
			delete[] numbers;
		}
	}
}


// �߿��� ����
// C�� malloc�� void*�� ��ȯ�Ѵ�.  //heap
// c++�� new �� ������ �ּҸ� ��ȯ�Ѵ�.  //free store
