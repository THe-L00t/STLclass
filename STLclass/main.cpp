//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 목 910					3월 10일 월요일		(4주 2일)
//---------------------------------------------------------------------------//
//
//	Callable types - 호출가능한 타입
//  1. 함수
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
// [문제] 값의 범위가 [0,1'000'0000) 까지인 random int값 천 만개를 저장할 
// 메모리를 확보하고 값을 채워라
// (시작) qsort로 오름차순 정렬하라.
// 정렬한 결과 중에서 앞에서 부터 1000개만 화면 출력하라
 
std::array<int, 1000'0000> numbers;

int 오름차순(const void* a, const void* b);
int 내림차순(const void* a, const void* b);

int main( ) 
{

	// 두 가지 예외사항
	// int[10] a;   X
	// int(*)(const void*,const void*) fp;   X


	int (*정렬방법)(const void*, const void*);
	//std::unique_ptr<std::array<int, 1000'0000>> numbers{ new std::array<int,1000'0000> };
	for (int& num : numbers) {
		num = uid(dre);
	}
	
	if(numbers[0] %2 == 1)정렬방법 = 오름차순;
	else 정렬방법 = 내림차순;

	qsort(numbers.data(), numbers.size(), sizeof(int), 정렬방법);
	for (int& num : numbers | std::views::take(1000))
	{
		std::print("{:8}", num);
		//std::cout << numbers[i];
	}

	save("main.cpp");

}

int 오름차순(const void* a, const void* b)
{
	int A = *(int*)a;
	int B = *(int*)b;
	if (A < B) return -1;
	else if (B < A) return 1;
	return 0;
}

int 내림차순(const void* a, const void* b)
{
	int A = *(int*)a;
	int B = *(int*)b;
	if (A < B) return 1;
	else if (B < A) return -1;
	return 0;
}
