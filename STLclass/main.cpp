//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 목 910					4월 3일 월요일		(5주 2일)
// 8주 1일 중간고사 (4월 24일 목요일) - 30점
//---------------------------------------------------------------------------//
//
// class STRING 작성 시작 - STL의 표준 컨테이너가 되도록 발전시킨다.
//							벡터의 동작을 진짜 자세히 이해하려고
//
//---------------------------------------------------------------------------
//
// 
#include <iostream>	
#include <array>
#include <algorithm>
#include "save.h"
#include "STRING.h"


extern bool 관찰;
int main( ) 
{
	// 이동의미론 move sementic
	// 하위 호환성에 의해 이동연산을 모르는 클래스여도 move사용 시 프로그램이 죽으면 안된다.
	// 결국 프로그램은 문제없이 돌아간다. 
	// 다만 결과는 복사와 같다.


	std::array<STRING, 5> a{ "1","333","55555","22","4444"};
	//[문제] a의 원소를 길이기준 오름차순으로 정렬하고 화면에 출력하라
	//std::sort(a.begin(), a.end());
	관찰 = true;
	//람다버전
	std::sort(a.begin(), a.end(), [](const STRING& lhs, const STRING& rhs) {
		return lhs.size() < rhs.size();
		});
	관찰 = false;
	for (const STRING& s : a) {
		std::cout << s << std::endl;
	}
	save("main.cpp");
	save("STRING.cpp");
}

