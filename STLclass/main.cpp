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
#include <array>		// 컴파일 전에 숫자가 확정 => 정적 메모리 => array만 사용하자
#include <fstream>
#include "save.h"

// [문제] e-class 에서 다운받은 Dog 10만마리에는 Dog객체 10만개가 저장되어 있다.  
// 파일은 binary mode로 열었고 Dog객체는 파일의 write함수를 사용하여 메모리 그대로 저장하였다. 
// Dog객체 10만개를 메모리에 모두 저장하라
// 모든 객체를 화면에 출력하시오

class Dog {
public:
	friend std::ostream& operator<<(std::ostream& os, const Dog& d) {
		return os << "[id] " << d.id << "[name] " << d.name;
	}
private:
	std::string name;
	int id;
};
std::array<Dog, 10'0000> dogs;		// 알아서 초기화됌

int main( ) 
{
	Dog dog;
	std::ifstream in{ "Dog 10만마리" , std::ios::binary};
	if (not in) return 10101010;

	in.read((char*)dogs.data(), sizeof(Dog) * dogs.size());
	//std::cout << dogs[9'9999] << std::endl;


	//std::cout << dog << std::endl;
	for (const Dog& d : dogs) {
		std::cout << d << std::endl;
	}
	//std::cout << dogs.back() << std::endl;	//back이 마지막 원소를 가리킴

	save("main.cpp");
}

