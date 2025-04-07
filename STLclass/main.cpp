//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 목 910					4월 3일 월요일		(5주 2일)
// 8주 1일 중간고사 (4월 24일 목요일) - 30점
// 6주 1일 과제설명 (4월 10일 목요일) - 30점
//---------------------------------------------------------------------------//
//
// class STRING 작성 시작 - std::string과 유사한 동작을 한다.  
//
//
//---------------------------------------------------------------------------
//
// 
#include <iostream>	
#include <string>
#include <memory>
#include "save.h"

class STRING {
public:
	STRING(const char* p) : s{ strlen(p) }, d{ std::make_unique<char[]>(s) } {
		//d.release();   디폴트 초기화시 상관 없음
		memcpy(d.get(), p, s);		//DMA 가 가능하다. 
	}

	const STRING& operator=(const STRING& rhs) {
		d = std::make_unique<char[]>(rhs.size());
		memcpy(d.get(), rhs.d.get(), s);
		s = rhs.size();
		return *this;
	}
	size_t size() const{
		return s;
	}
private:
	size_t s{};
	std::unique_ptr<char[]> d{};

	friend std::ostream& operator<<(std::ostream& os, const STRING& str) {
		return os << str.d.get();
	}
};

int main( ) 
{
	STRING s{ "std::string과 유사한 클래스" };

	std::cout << "s가 관리하는 자원의 바이트 수 :" << s.size() << std::endl;
	//STRING t = s;

	//std::cout << t << std::endl;
	std::cout << s << std::endl;
	save("main.cpp");

}
// __cedcl : c언어 함수 인자 전달 방식

