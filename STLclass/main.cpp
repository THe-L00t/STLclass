//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					5�� 19�� ������		(11�� 2��)
// 2025. 6. 19 �⸻ ����
// 2025. 5. 12 ������ - ������ǰ �߰���ǥ
//---------------------------------------------------------------------------//
//  �ݺ��� - �� �����̳ʰ� �ڱⰡ �����ϴ� ���Ҹ� ó������ ������ �������� 
//  ��ȸ�� �� �ֵ��� �����ϴ� �������̽��̴�.
// �����̳ʿ� ����(�ڷᱸ���� ���� �ٸ��ϱ�), �ݺ��ڰ� �� �� �ִ� ���� ���� �ٸ���. 
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

extern bool ����;

// �ݺ��ڴ� ���� �ٸ��� - 6���� category
// [����] �Լ� f�� �ݺ��ڸ� ���ڷ� �޾� � ������ �ݺ������� ȭ�鿡 ����ϴ� 
// �Լ� f�� �����϶� 

template<class �ݺ���>
void f(const �ݺ���& what) {
    std::cout << typeid(�ݺ���::iterator_category).name() << std::endl;
}



int main( ) 
{
    //f(std::istream_iterator<int>{std::cin});    //�Է�
    f(std::ostream_iterator<char>{std::cout});  //���
    f(std::forward_list<char>{}.begin());       //forward_iterator
    f(std::list<char>::iterator{});             //bidirectional_iterator
    std::deque<STRING> d;           
    f(d.rbegin());                              //random_access_iterator
    f(std::vector<char>{}.cbegin());            //

 	save("main.cpp");
}

