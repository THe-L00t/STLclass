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
#include <array>
#include <algorithm>
#include "save.h"
#include "STRING.h"


extern bool ����;
int main( ) 
{
	
	std::array<STRING, 5> a{ "1","333","55555","22","4444"};
	//[����] a�� ���Ҹ� ���̱��� ������������ �����ϰ� ȭ�鿡 ����϶�
	//std::sort(a.begin(), a.end());
	���� = true;
	//���ٹ���
	std::sort(a.begin(), a.end(), [](const STRING& lhs, const STRING& rhs) {
		return lhs.size() < rhs.size();
		});
	���� = false;
	for (const STRING& s : a) {
		std::cout << s << std::endl;
	}
	save("main.cpp");
	save("STRING.cpp");
}

