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
std::array<Dog, 10'0000> dogs;		// �˾Ƽ� �ʱ�ȭ��

int main( ) 
{
	Dog dog;
	std::ifstream in{ "Dog 10������" , std::ios::binary};
	if (not in) return 10101010;

	in.read((char*)dogs.data(), sizeof(Dog) * dogs.size());
	std::cout << dogs[9'9999] << std::endl;
	//while (in.read((char*)&dog, sizeof(Dog)))
	//	;
	//std::cout << dog << std::endl;
	std::cout << dogs[9'9999] << std::endl;

	save("main.cpp");
}

