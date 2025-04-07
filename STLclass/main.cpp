//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					4�� 3�� ������		(5�� 2��)
// 8�� 1�� �߰���� (4�� 24�� �����) - 30��
// 6�� 1�� �������� (4�� 10�� �����) - 30��
//---------------------------------------------------------------------------//
//
//	Callable types - ȣ�Ⱑ���� Ÿ��, ��� ȣ�Ⱑ��Ÿ���� ��ǥ�ϴ� function
//  1. �Լ�
//  2. �Լ� ������
//  3. ���� - �̸����� �Լ�, VS������ �Լ� ��ü�� �̿��Ͽ� ���ٸ� �����Ͽ��� 
//  4. �Լ���ü ( function object ) - �Լ� ȣ�� �����ڸ� �����ε��� Ŭ������ ��ü 
//  5. ����Լ� 
// 1,2 �Լ� 3,4 Ŭ����
//---------------------------------------------------------------------------
//
// 
#include <iostream>	
#include <array>
#include <string>
#include <fstream>
#include <print>
#include "save.h"

// [��Ȳ] eclass���� �ٿ���� ����"Dog �ʸ�����"���� 
// ��Ȯ�ϰ� Dog��ü 10������ ����Ǿ��ִ�. 
// ������ 
//		ofstream out{"Dog �ʸ�����"};
// DogŸ���� ��ü dog�� 
//		out << dog;
// �ڵ�� �����Ͽ���. 

class Dog {
public:
	void show();
private:
	size_t num;					// ���� int��
	std::string name;			// [3,60) ������ �ҹ��ڷθ� ����

	friend std::ostream& operator<<(std::ofstream& os, const Dog& dog) {
		return os << dog.num << " " << dog.name << " " << std::endl;
	}

	friend std::istream& operator>>(std::istream& is, Dog& dog) {
		return is >> dog.num >> dog.name;
	}

};	

	// [����] "Dog �ʸ�����" ���Ͽ� ����� 10������ Dog��ü�� ��� �о� �޸𸮿� �����϶�. 
	// ������ ��ü�� ������ ȭ�鿡 ����ϰ� ��µ� ������ �������� �����.
	// �޸𸮿� �ִ� Dog��ü�� name ���� ���� ������������ �����϶�. 
	// ������ ������ ��ü�� ������ ȭ�鿡 ����ϰ� ������ ���´�. 
std::array<Dog, 10'0000> dogs;

int main( ) 
{
	std::ifstream in{ "Dog �ʸ�����" };

	size_t num;
	std::string name;

	int i{ 0 };
	while (in >> dogs[i++]) {
	}

	dogs.back().show();
	std::cout << num << ", " << name << std::endl;	//584335134, meyioibmgucjgbiauulpkzkkrwktvvotfefeclvvhdnnczrjssqxd
	save("main.cpp");

}
// __cedcl : c��� �Լ� ���� ���� ���

void Dog::show()
{
	std::println("{:12} - {:}", num, name);
}
