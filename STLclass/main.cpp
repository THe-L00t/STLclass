//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					4�� 3�� ������		(5�� 2��)
// 8�� 1�� �߰���� (4�� 24�� �����) - 30��
//---------------------------------------------------------------------------//
//
// class STRING �ۼ� ���� - STL�� ǥ�� �����̳ʰ� �ǵ��� ������Ų��.
//							������ ������ ��¥ �ڼ��� �����Ϸ���
//
//---------------------------------------------------------------------------
//
// 
#include <iostream>	
#include <fstream>
#include <array>
#include <algorithm>
#include "save.h"
#include "STRING.h"


extern bool ����;
int main( ) 
{
	// [����]

	std::ifstream in{ "main.cpp" };
	if (not in) {
		return 20250414;
	}

	STRING s;
	size_t cnt{};
	while (in >> s) {
		std::cout << s << std::endl;
		++cnt;
	}
	std::cout << "�� " << cnt << "���� �ܾ �о����ϴ�. " << std::endl;
	save("main.cpp");
	save("STRING.cpp");
}

