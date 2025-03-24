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
#include <array>
#include <fstream>
#include "save.h"

// [����] e-class ���� �ٿ���� Dog 10���������� Dog��ü 10������ ����Ǿ� �ִ�.  
// ������ binary mode�� ������ Dog��ü�� ������ write�Լ��� ����Ͽ� �޸� �״�� �����Ͽ���. 
// Dog��ü 10������ �޸𸮿� ��� �����϶�
// ���� ������ ��ü�� ������ cout���� ȭ�鿡 ����϶� 

class Dog {
public:
	friend std::ostream& operator<<(std::ostream& os, Dog& d) {
		return os << "[id] " << d.id << "[name] " << d.name;
	}
private:
	std::string name;
	int id;
};

int main( ) 
{
	std::array<Dog, 10'0000> arr;
	std::ifstream in{ "Dog 10������" };

	in.read((char*)arr.data(), sizeof(Dog) * arr.size());
	std::cout << arr[9'9999] << std::endl;
	save("main.cpp");
}

