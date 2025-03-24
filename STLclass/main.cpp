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
#include <random>
#include <print>
#include "save.h"

// Dog ��ü 10������ ���� "Dog 10������"�� �����Ѵ�. 

std::default_random_engine dre;
std::uniform_int_distribution<int> uid{'a','z'}; 

class Dog {
public:
	Dog() : id{ ++sid } {
		for (size_t i = 0; i < 15; i++)
		{
			name += uid(dre);
		}
	};

	void show() const;
private:
	std::string name;	// 15������ random �ҹ��ڷ� ����
	int id;			// �����ɶ����� ������ȣ �ο�

	static int sid;		// scope:local, life-time:global
};

int Dog::sid{};

int main( char argc, char* argv) 
{
	Dog dog;

	dog.show();
	save("main.cpp");
}

void Dog::show() const
{
	std::println("[{:8}] - { }", id, name);
}
