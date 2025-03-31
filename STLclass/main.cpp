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
#include <chrono>
#include "save.h"
 
std::random_device rd;
std::default_random_engine dre{ rd() };
std::uniform_int_distribution uid(0, 999'9999);
// [문제] 값의 범위가 [0,1'000'0000) 까지인 random int값 천 만개를 저장할 
// 메모리를 확보하고 값을 채워라
// (시작) qsort로 오름차순 정렬하라.
// 정렬한 결과 중에서 앞에서 부터 1000개만 화면 출력하라
 
std::array<int, 1000'0000> numbers;
bool 내림차순(int a, int b)
{
	return a > b;
}

int main( ) 
{

	for (int& num : numbers) {
		num = uid(dre);
	}

	//STL의 sort 정렬
	//정렬에 걸리는 시간
	auto b = std::chrono::high_resolution_clock::now();//스톱워치 시작
	sort(numbers.begin(), numbers.end(),내림차순 );	// generic, contiguous
	auto e = std::chrono::high_resolution_clock::now();//스톱워치 끝

	for (int& num : numbers | std::views::take(1000))
	{
		std::print("{:8}", num);
	}

	std::cout << std::endl << "경과시간 - " << e-b << std::endl;
	save("main.cpp");

}

