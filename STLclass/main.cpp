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
#include "save.h"
#include "STRING.h"

extern bool ����;

// �ݺ��ڴ� ���� �ٸ��� - 6���� category
// [����] �Լ� f�� �ݺ��ڸ� ���ڷ� �޾� � ������ �ݺ������� ȭ�鿡 ����ϴ� 
// �Լ� f�� �����϶� 

void f(const std::ostream_iterator<char>& what) {
    std::cout << typeid(std::ostream_iterator<char>::iterator_category).name() << std::endl;
}

void f(const std::istream_iterator<int>& what) {
    std::cout << typeid(std::istream_iterator<int>::iterator_category).name() << std::endl;
}

int main( ) 
{
    f(std::ostream_iterator<char>{std::cout});
    f(std::istream_iterator<int>{std::cin});

 	save("main.cpp");
}

