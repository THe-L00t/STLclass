//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					3�� 10�� ������		(4�� 2��)
//---------------------------------------------------------------------------//
//
//	Callable types - ȣ�Ⱑ���� Ÿ��
//  1. �Լ�
// 
//---------------------------------------------------------------------------
//
// 
#include <iostream>	
#include <fstream>
#include <algorithm>
#include "save.h"
 
// [����] "����.cpp"������ �ҹ��ڸ� �빮�ڷ� ��ȯ�Ͽ� "���� �빮��.cpp"�� �����϶� 
int main( ) 
{
	
	std::ifstream in{ "main.cpp" };
	if (not in) return 404;
	std::ofstream out{ "���� �빮��.cpp" };

	std::transform(std::istreambuf_iterator<char>{in}, {}, std::ostreambuf_iterator<char>{out}, 
		[](char c) {
			return toupper(c); 
		});		//�� �� �ִ� �Լ� �� ��������, callable

	save("main.cpp");

}


