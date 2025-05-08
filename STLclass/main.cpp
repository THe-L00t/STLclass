//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					5�� 1�� ������		(9�� 1��)
// 2025. 6. 19 �⸻ ����
// 2025. 5. 12 ������ - ������ǰ �߰���ǥ
//---------------------------------------------------------------------------//
//
// STL containers - Contianers are objects that store other objects.
// array<T,N>   - �����ϰ� ũ�� ����
// vector<T>    - random access, []������ ����, O(1)���� ��� ���ҿ� access, O(1)�� push_back
// deaue<T>     - random access, []������ ����, O(1)���� ��� ���ҿ� access, O(1)�� push_front, push_back
// list<T>      - O(1)�� ������ ��ġ�� insert, delete�� �����ο�, �ڷᱸ���� Ȱ���h �����Լ� ����(remove, sort, splice)
//---------------------------------------------------------------------------
//
// 
#include <iostream>	
#include <algorithm>
#include <vector>
#include <deque>
#include <list>
#include "save.h"
#include "STRING.h"

extern bool ����;

class TEST {
    char x[1'000'000];
};

int main( ) 
{
    {
        std::list<TEST> v;
        while (true) {
            try {
                v.emplace_back();
            }
            catch (std::exception& e) {
                std::cout << "���� �Դϴ� - " << e.what() << std::endl;
                std::cout << "list�� �ִ� ������ - " << v.size() << std::endl;// 122071�� 
                break;
            }
        }
    }

    //{
    //    std::deque<TEST> v;
    //    while (true) {
    //        try {
    //            v.emplace_back();
    //        }
    //        catch (std::exception& e) {
    //            std::cout << "���� �Դϴ� - " << e.what() << std::endl;
    //            std::cout << "deque�� �ִ� ������ - " << v.size() << std::endl;// 122232�� 
    //            break;
    //        }
    //    }
    //}

    //{
    //    std::vector<TEST> v;
    //    while (true) {
    //        try {
    //            v.emplace_back();
    //        }
    //        catch (std::exception& e) {
    //            std::cout << "���� �Դϴ� - " << e.what() << std::endl;
    //            std::cout << "vector�� �ִ� ������ - " << v.size() << std::endl;//61447�� 
    //            break;
    //        }
    //    }
    //}

 	save("main.cpp");
}

