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

// [����] main.cpp�� �ִ� �ܾ ó������ 50���� �޸�(STRING)�� �����غ���
// ���� ������������ ��������
// ����� ȭ�鿡 �������
// ���� ù �ܾ ������ �����

extern bool ����;
int main( ) 
{
	

	std::ifstream in{ "main.cpp" };
	if (not in) {
		return 20250414;
	}

	std::array<STRING,50> s;
	size_t cnt{};
	while (in >> s[cnt] && cnt < 50) {
		std::cout << s[cnt] << std::endl;
		++cnt;
	}
	std::sort(s.begin(), s.end());
	std::cout << "�� " << cnt << "���� �ܾ �о����ϴ�. " << std::endl;
	/*for (const STRING& s1 : s) {
		std::cout << s1 << std::endl;
	}*/
	for (auto i = s.rbegin(); i != s.rend(); ++i)
	{

	}


	save("main.cpp");
	save("STRING.cpp");
}

