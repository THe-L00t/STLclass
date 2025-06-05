//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 목 910					6월 5일 목요일		(13주 2일)
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
#include <random>
#include <array>
#include <map>
#include "save.h"
#include "STRING.h"

extern bool 관찰;

std::default_random_engine dre;
std::uniform_int_distribution uid{ 0,99'9999 };
std::normal_distribution nd;  //출력은 double값

// [문제] uniform 분포는 uniform 한가?
// [문제] normal 분포는 normal 한가?

std::array<int, 2025'0605> a;

int main( ) 
{
    for (int& i : a) {
        double temp = nd(dre) * 20'0000 + 55'5555;
        
        if(0<= temp && temp < 99'9999) i = temp;
    }
    std::map<int, size_t> 분포;
    for (int i : a) {
        분포[i / 5'0000]++;
    }
    for (auto [구간, 개수] : 분포) {
        std::cout << 구간 << "\t - " << 개수 << std::endl;
    }

 	save("main.cpp");
}

