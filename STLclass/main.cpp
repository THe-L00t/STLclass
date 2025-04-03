//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 목 910					4월 3일 월요일		(5주 1일)
// 8주 1일 중간고사 (4월 24일 목요일) - 30점
// 6주 1일 과제설명 (4월 10일 목요일) - 30점
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
// std::sort를 사용하여 오름차순으로 정렬하라
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
	std::ranges::sort(numbers.begin(), numbers.end());	// 디폴트 오름차순
	auto e = std::chrono::high_resolution_clock::now();//스톱워치 끝

	for (int& num : numbers | std::views::take(1000))
	{
		std::print("{:8}", num);
	}

	std::cout << std::endl << "경과시간(duration) - " << e-b << std::endl;
	std::cout << "경과시간(1/1000초) - " << std::chrono::duration_cast<std::chrono::milliseconds>(e - b) << std::endl;

	// sort로 내림차순 



	save("main.cpp");

}

