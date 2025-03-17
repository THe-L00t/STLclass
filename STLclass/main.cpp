//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 수 910					3월 10일 월요일		(2주 2일)
//---------------------------------------------------------------------------//
//
//	많은 수의 자료를 다루기 - int 
// 
//---------------------------------------------------------------------------
//
// 
#include <iostream>	// 헤더 파일의 전체 코드를 가져온다. 주석은 모두 지운다. 
#include <random>
#include <print>
#include <array>
#include <algorithm>
#include "save.h"

// 컴파일러의 동작

// 랜덤 int값 1000개를 메모리에 저장하라 
// 저장한 값 중에서 가장 큰 값이 무엇인지 찾아 화면에 출력하라 
// 출력된 값을 답안지에도 써라 

std::default_random_engine dre{ };
//std::mt19937_64 dre;								//값을 뽑아내고
std::uniform_int_distribution uid{0,9'999'999};	//가공한다.

int main( char argc, char* argv) 
{
	std::array<int, 1'000> n;	// T[n] --> array<T,n> ;
	
	//	일반적인 for문이라면 hard_wired coding이다. 이때 들어가는 1000이라는 숫자는 magic number.
	for (int& a : n) {
		a = uid(dre);
	}

	//int max = -1;		//numeric_limits<int>::min(); 이용하기 
	//for (const int& a : n) {
	//	std::print("{:8}", a);	
	//	if (max < a) max = a;
	//}
	//// ^ 최댓값을 찾는 알고리즘 O(n)

    auto pos = std::max_element(n.begin(), n.end());
	std::cout << "가장 큰 값 " << *pos << std::endl;
	save("main.cpp");
}

// STL이라도 적재적소에 사용하기
// 최소 자원과 최소 노력

