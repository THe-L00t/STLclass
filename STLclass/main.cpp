//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					3�� 10�� ������		(3�� 2��)
//---------------------------------------------------------------------------//
//
//	���� ���� �ڷḦ �ٷ�� - Dog�� �а� �� �� �־��
// 
//---------------------------------------------------------------------------
//
// 
#include <iostream>	
#include <string>
#include <array>		// ������ ���� ���ڰ� Ȯ�� => ���� �޸� => array�� �������
#include <fstream>
#include "save.h"

// [����] e-class ���� �ٿ���� Dog 10���������� Dog��ü 10������ ����Ǿ� �ִ�.  
// ������ binary mode�� ������ Dog��ü�� ������ write�Լ��� ����Ͽ� �޸� �״�� �����Ͽ���. 
// ���� �ڵ尡 ���� ���� ����� �� �ֵ��� �ʿ��� �ڵ��� �߰��϶�

class Dog {
public:
	friend std::ifstream& operator>>(std::ifstream& is, Dog& d) {
		return is.read((char*)&d, sizeof(Dog));

	}
	friend std::ostream& operator<<(std::ostream& os, const Dog& d) {
		return os << "[id] " << d.id << "[name] " << d.name;
	}
	
private:
	std::string name;
	int id;
};
std::array<Dog, 10'0000> dogs;		// �˾Ƽ� �ʱ�ȭ��

int main( ) 
{
	std::ifstream in{ "Dog 10������" , std::ios::binary};
	if (not in) return 10101010;

	for (size_t i = 0; i < dogs.size(); ++i)
	{
		in >> dogs[i];
	}

	// ���

	save("main.cpp");
}

