//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 수 910					3월 10일 월요일		(3주 2일)
//---------------------------------------------------------------------------//
//
//	많은 수의 자료를 다루기 - Dog를 읽고 쓸 수 있어야
// 
//---------------------------------------------------------------------------
//
// 
#include <iostream>	
#include <string>
#include <random>
#include <print>
#include <fstream>
#include "save.h"


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
	std::string name;	// 15글자의 random 소문자로 구성
	int id;			// 생성될때마다 고유번호 부여

	static int sid;		// scope:local, life-time:global
};

int Dog::sid{};

int main( char argc, char* argv) 
{
	// Dog 객체 10만개를 파일 "Dog 10만마리"에 저장한다. 
	// 파일은 binary mode로 열었고 Dog객체는 파일의 write함수를 사용하여 메모리 그대로 저장하였다. 
	std::ofstream out{ "Dog 10만마리", std::ios::binary };
	for (size_t i = 0; i < 10'0000; ++i)
	{
		Dog dog;
		out.write((char*)&dog, sizeof(dog));
	}

	save("main.cpp");
}

void Dog::show() const
{
	std::println("[{:8}] - {}", id, name);
}
