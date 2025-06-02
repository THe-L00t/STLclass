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
#include <algorithm>
#include "save.h"
#include "STRING.h"

extern bool 관찰;
// [문제] 이상한 나라의 앨리스.txt를 다운받는다.
// 1. 파일을 set<STRING> s;에 저장하라.
// 2. 모두 몇 단어로 만들었는지 출력하라.

//template<class T>
//struct less {   // functional object : 함수호출을 정의한 객체 
//    bool operator()(const T& lhs, const T& rhs) {
//       return lhs.size() < rhs;
//    }
//};
// 템플릿을 특수화 할 수 있다.
//template<>
//struct std::less<STRING> {  
//    bool operator()(const STRING& lhs, const STRING& rhs) const{
//        return lhs.size() < rhs.size();
//    }
//};


int main( ) 
{
    std::ifstream in{ "이상한 나라의 앨리스.txt" };
    if (not in) { return 404; }

    // 스트림에서 읽어올 수 있도록 연산자 오버로딩 해두어 가능
    std::set<STRING> s{ std::istream_iterator<STRING>{in}, {} };
    //less 자리에는 호출가능 타입이라면 무엇이든 들어갈 수 있다. 

    std::cout << "총 " << s.size() << "단어 입니다. " << std::endl;
    // [문제] 단어를 입력받아서 소설에 있는 단어인지 알려주자 


    while (true) {
        std::cout << "찾을 단어를 입력하세요" << std::endl;
        STRING 단어;
        std::cin >> 단어;

        auto 위치 = std::find(s.begin(), s.end(), 단어);
        if (위치 != s.end()) {
            
            std::cout << std::distance(s.begin(), 위치)+1 << "번째 글자입니다. " << std::endl;
        }
        else std::cout << "없습니다." << std::endl;

 
    }






 	save("main.cpp");
}

