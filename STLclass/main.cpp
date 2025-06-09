//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					6�� 9�� �����		(14�� 1��)
// 2025. 6. 19 �⸻ ����
// 2025. 5. 12 ������ - ������ǰ �߰���ǥ
//---------------------------------------------------------------------------//
//  
//  STL Algorithm
//---------------------------------------------------------------------------
// ���� ���� : adjacent_find
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

extern bool ����;
// int õ������ �غ��� �� int ������ õ���� �߿� �ִ��� ã�ƺ���.
std::default_random_engine dre;
std::uniform_int_distribution uid{ 1, 1000'0000 };

const int Num{ 1000'0000 };
const int fNum{ 1'0000 };
std::array<int, Num> a;
std::array<int, fNum> fa;
int main( ) 
{
    // ������ �غ�
    for (int& num : a) {
        num = uid(dre);
    }
    for (int& num : fa) {
        num = uid(dre);
    }

    {   // vector ã�� �Ƿ�
        std::vector<int> v(a.begin(), a.end());
        std::cout << "vector " << v.size() << "���� int�߿��� " << fa.size() << "���� ���� ã��" << std::endl;
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
        std::cout << cnt << "�� ã�µ� " << duration.count() << "ms �ɷȽ��ϴ�. " << std::endl;
    }
    {   // set ã�� �Ƿ�
        std::multiset<int> s(a.begin(), a.end());
        std::cout << "set " << s.size() << "���� int�߿��� " << fa.size() << "���� ���� ã��" << std::endl;
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
        std::cout << cnt << "�� ã�µ� " << duration.count() << "ms �ɷȽ��ϴ�. " << std::endl;
    }
    {   // unordered_set ã�� �Ƿ�
        std::unordered_multiset<int> u(a.begin(), a.end());
        std::cout << "unordered_set " << u.size() << "���� int�߿��� " << fa.size() << "���� ���� ã��" << std::endl;
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
        std::cout << cnt << "�� ã�µ� " << duration.count() << "ms �ɷȽ��ϴ�. " << std::endl;
    }

    {   // ���ĵ� vector ã�� �Ƿ�
        std::vector<int> v(a.begin(), a.end());
        std::sort(v.begin(), v.end());
        std::cout << "vector " << v.size() << "���� int�߿��� " << fa.size() << "���� ���� ã��" << std::endl;
        size_t cnt{};
        auto oldt = std::chrono::high_resolution_clock::now();
        for (const int& num : fa) {
            if (std::binary_search(v.begin(), v.end(), num)) {
                ++cnt;
            }
        }
        auto nowt = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(nowt - oldt);
        std::cout << cnt << "�� ã�µ� " << duration.count() << "ms �ɷȽ��ϴ�. " << std::endl;
    }

 	save("main.cpp");
}

