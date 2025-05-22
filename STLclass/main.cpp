//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 목 910					5월 19일 월요일		(11주 2일)
// 2025. 6. 19 기말 시험
// 2025. 5. 12 월요일 - 졸업작품 중간발표
//---------------------------------------------------------------------------//
//  반복자 - 각 컨테이너가 자기가 관리하는 원소를 처음부터 끝까지 빠짐없이 
//  순회할 수 있도록 제공하는 인터페이스이다.
// 컨테이너에 따라서(자료구조가 서로 다르니까), 반복자가 할 수 있는 일은 서로 다르다. 
//---------------------------------------------------------------------------
//
// 
#include <iostream>	
#include <iterator>
#include <forward_list>
#include <list>
#include <deque>
#include <vector>
#include "save.h"
#include "STRING.h"

extern bool 관찰;

// 반복자는 서로 다르다 - 6개의 category
// [문제] 함수 f는 반복자를 인자로 받아 어떤 종류의 반복자인지 화면에 출력하는 
// 함수 f를 정의하라 

template<class 반복자>
void f(const 반복자& what) {
    std::cout << typeid(std::iterator_traits<반복자>::iterator_category).name() << std::endl;
}



int main( ) 
{
    STRING s;

    f(s.rbegin());

 	save("main.cpp");
}

