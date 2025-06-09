//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 목 910					6월 9일 목요일		(14주 1일)
// 2025. 6. 19 기말 시험
// 2025. 5. 12 월요일 - 졸업작품 중간발표
//---------------------------------------------------------------------------//
//  
//  STL Algorithm
//---------------------------------------------------------------------------
// 과제 관련 : adjacent_find
// 
#include <iostream>
#include <random>
#include <array>
#include <vector>
#include <set>
#include <unordered_set>
#include <chrono>
#include <algorithm>
#include "save.h"
#include "STRING.h"

extern bool 관찰;
// int 천만개를 준비한 후 int 만개가 천만개 중에 있는지 찾아본다.
std::default_random_engine dre;
std::uniform_int_distribution uid{ 1, 1000'0000 };

const int Num{ 1000'0000 };
const int fNum{ 1'0000 };
std::array<int, Num> a;
std::array<int, fNum> fa;
int main( ) 
{
    // 데이터 준비
    for (int& num : a) {
        num = uid(dre);
    }
    for (int& num : fa) {
        num = uid(dre);
    }

    {   // vector 찾기 실력
        std::vector<int> v(a.begin(), a.end());
        std::cout << "vector " << v.size() << "개의 int중에서 " << fa.size() << "개의 원소 찾기" << std::endl;
        size_t cnt{};
        auto oldt = std::chrono::high_resolution_clock::now();
        for (const int& num : fa) {
            auto p = find(v.begin(), v.end(), num);
            if (p not_eq v.end()) {
                ++cnt;
            }
        }
        auto nowt = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(nowt - oldt);
        std::cout << cnt << "개 찾는데 " << duration.count() << "ms 걸렸습니다. " << std::endl;
    }
    {   // set 찾기 실력
        std::multiset<int> s(a.begin(), a.end());
        std::cout << "set " << s.size() << "개의 int중에서 " << fa.size() << "개의 원소 찾기" << std::endl;
        size_t cnt{};
        auto oldt = std::chrono::high_resolution_clock::now();
        for (const int& num : fa) {
            auto p = s.find(num);
            if (p not_eq s.end()) {
                ++cnt;
            }
        }
        auto nowt = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(nowt - oldt);
        std::cout << cnt << "개 찾는데 " << duration.count() << "ms 걸렸습니다. " << std::endl;
    }
    {   // unordered_set 찾기 실력
        std::unordered_multiset<int> u(a.begin(), a.end());
        std::cout << "unordered_set " << u.size() << "개의 int중에서 " << fa.size() << "개의 원소 찾기" << std::endl;
        size_t cnt{};
        auto oldt = std::chrono::high_resolution_clock::now();
        for (const int& num : fa) {
            auto p = u.find(num);
            if (p not_eq u.end()) {
                ++cnt;
            }
        }
        auto nowt = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(nowt - oldt);
        std::cout << cnt << "개 찾는데 " << duration.count() << "ms 걸렸습니다. " << std::endl;
    }

    {   // 정렬된 vector 찾기 실력
        std::vector<int> v(a.begin(), a.end());
        std::sort(v.begin(), v.end());
        std::cout << "vector " << v.size() << "개의 int중에서 " << fa.size() << "개의 원소 찾기" << std::endl;
        size_t cnt{};
        auto oldt = std::chrono::high_resolution_clock::now();
        for (const int& num : fa) {
            if (std::binary_search(v.begin(), v.end(), num)) {
                ++cnt;
            }
        }
        auto nowt = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(nowt - oldt);
        std::cout << cnt << "개 찾는데 " << duration.count() << "ms 걸렸습니다. " << std::endl;
    }

 	save("main.cpp");
}

