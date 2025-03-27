//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 목 910					3월 10일 월요일		(4주 1일)
//---------------------------------------------------------------------------//
//
//	RAII 와 smart pointer 
// 
//---------------------------------------------------------------------------
//
// 
#include <iostream>	
#include <numeric>
#include "save.h"

// [문제] 양의 정수(int의 최댓값)를 입력받아 num에 저장하라 
// int값을 num개 저장할 수 있는 메모리를 확보하라.
// 메모리의 내용을 1부터 시작하는 정수로 채워라. 
// 메모리에 있는 값의 합계를 화면에 출력하라
// 이 과정을 영원히 반복하라 


int main( ) 
{

	save("main.cpp");
	while (true) {
		std::cout << "양의 정수를 입력하라 : ";
		int num;
		std::cin >> num;
		if (num < 1) {
			std::cout << " 다시 입력하세요 " << std::endl;
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
			std::cout << "1부터 " << num << "까지의 합계 - " << sum << std::endl;
			delete[] numbers;
		}
	}
}


// 중요한 내용
// C의 malloc는 void*를 반환한다.  //heap
// c++의 new 는 가공한 주소를 반환한다.  //free store
