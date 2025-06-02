//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 목 910					6월 2일 월요일		(13주 1일)
// 2025. 6. 19 기말 시험
// 2025. 5. 12 월요일 - 졸업작품 중간발표
//---------------------------------------------------------------------------//
//  Associative Container
//  - set<key>          : key 와 value를 구분하지 않는다.
//  - map<key, value>   : 모델링 - texture, <아이돌그룹, 멤버>
//  
//---------------------------------------------------------------------------
//
// 
#include <iostream>	
#include <fstream>
#include <vector>
#include <set>
#include "save.h"
#include "STRING.h"

extern bool 관찰;
// [문제] 이상한 나라의 앨리스.txt를 다운받는다.
// 1. 파일을 set<STRING> s;에 저장하라.
// 2. 모두 몇 단어로 만들었는지 출력하라.

int main( ) 
{
    std::ifstream in{ "이상한 나라의 앨리스.txt" };
    if (not in) { return 404; }

    std::set<STRING> s{ std::istream_iterator<STRING>{in}, std::istream_iterator<STRING>{} };
    std::cout << "총 " << s.size() << "단어 입니다. " << std::endl;

    // while 사용할 때와 현재 비교해보기 
    //reserve 값 바꿔 비교해보기 

 	save("main.cpp");
}

