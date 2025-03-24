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
#include <array>
#include <fstream>
#include "save.h"

// [문제] e-class 에서 다운받은 Dog 10만마리에는 Dog객체 10만개가 저장되어 있다.  
// 파일은 binary mode로 열었고 Dog객체는 파일의 write함수를 사용하여 메모리 그대로 저장하였다. 
// Dog객체 10만개를 메모리에 모두 저장하라
// 제일 마지막 객체의 정보를 cout으로 화면에 출력하라 

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
	std::ifstream in{ "Dog 10만마리" };

	in.read((char*)arr.data(), sizeof(Dog) * arr.size());
	std::cout << arr[9'9999] << std::endl;
	save("main.cpp");
}

