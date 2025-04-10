//-------------------------------------------
// STRING.h - STL의 동작을 이해하기 위한 class / std::string과 유사하게 작성
//
//	2025. 04. 10 - 시작
//-------------------------------------------

#include "STRING.h"
STRING::STRING(const char* p) 
	: s{ strlen(p) }, d{ std::make_unique<char[]>(s) } {
	//d.release();   디폴트 초기화시 상관 없음
	memcpy(d.get(), p, s);		//DMA 가 가능하다. 
}

STRING::STRING(const STRING& other) 
	: s{ other.s } {
	*this = other;
	/*d = std::make_unique<char[]>(s);
	memcpy(d.get(), other.d.get(), s);*/
}

STRING& STRING::operator=(const STRING& other) {
	if (this == &other)		//& addressof
		return *this;
	d.release();
	s = other.size();
	d = std::make_unique<char[]>(s);
	memcpy(d.get(), other.d.get(), s);
	return *this;
}

size_t STRING::size() const {
	return s;
}

 std::ostream& operator<<(std::ostream& os, const STRING& str) {
	return os << str.d.get();
}