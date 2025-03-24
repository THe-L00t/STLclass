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
#include "save.h"

// Dog 객체 10만개를 파일 "Dog 10만마리"에 저장한다. 

std::default_random_engine dre;
std::uniform_int_distribution uid{'a','z'};

class Dog {
public:
	Dog() : id{ ++sid } {
		for (size_t i = 0; i < 15; i++)
		{
			name += uid(dre);
		}
	};
private:
	std::string name;	// 15글자의 random 소문자로 구성
	size_t id;			// 생성될때마다 고유번호 부여

	static int sid;		// scope:local, life-time:global
};

int Dog::sid{};

int main( char argc, char* argv) 
{
	

	save("main.cpp");
}



