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
// ��� ��ü�� ȭ�鿡 ����Ͻÿ�

class Dog {
public:
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
	Dog dog;
	std::ifstream in{ "Dog 10������" , std::ios::binary};
	if (not in) return 10101010;

	in.read((char*)dogs.data(), sizeof(Dog) * dogs.size());
	//std::cout << dogs[9'9999] << std::endl;


	//std::cout << dog << std::endl;
	for (const Dog& d : dogs) {
		std::cout << d << std::endl;
	}
	//std::cout << dogs.back() << std::endl;	//back�� ������ ���Ҹ� ����Ŵ

	save("main.cpp");
}

