//-------------------------------------------
// STRING.h - STL의 동작을 이해하기 위한 class / std::string과 유사하게 작성
//
//	2025. 04. 10 - 시작
//  2025. 04. 14 - 선택적 관찰 전역변수 선언
//  2025. 04. 14 - 이동의미론 
//  2025. 05. 01 - opretor==
//  2025. 05. 15 - 사전식 정렬 수정
//  2025. 05. 15 - begin(), end() 구현
//  2025. 05. 19 - rbegins(), rend() 구현
//-------------------------------------------

#include <algorithm>
#include "STRING.h"

size_t STRING::gid{ 0 };
bool 관찰{ false };

STRING::STRING()
	:id{ gid++ }
{
	if (관찰) { std::println("[{:6}] - {:16} 자원수 : {:3}, 주소 : {:12} 자원의 주소 : {:12}", id, "디폴트생성자", s, (void*)this, (void*)d.get()); }
}
STRING::~STRING()
{
	if (관찰)std::println("[{:6}] - {:16}", id, "소멸자");
}
STRING::STRING(const char* p)
	: s{ strlen(p) }, d{ std::make_unique<char[]>(s) }, id{ gid++ } {
	//d.release();   디폴트 초기화시 상관 없음
	memcpy(d.get(), p, s);		//DMA 가 가능하다. 
	if (관찰) { std::println("[{:6}] - {:16} 자원수 : {:3}, 주소 : {:12} 자원의 주소 : {:12}", id, "생성자", s, (void*)this, (void*)d.get()); }
}

STRING::STRING(const STRING& other) 
	: s{ other.s } {
	id = gid++;
	*this = other;
	/*d = std::make_unique<char[]>(s);
	memcpy(d.get(), other.d.get(), s);*/
	if (관찰) { std::println("[{:6}] - {:16} 자원수 : {:3}, 주소 : {:12} 자원의 주소 : {:12}", id, "복사생성자", s, (void*)this, (void*)d.get()); }
}

STRING& STRING::operator=(const STRING& other) {
	if (this == &other)		//& addressof
		return *this;
	d.release();
	s = other.size();
	d = std::make_unique<char[]>(s);
	memcpy(d.get(), other.d.get(), s);
	
	if (관찰) { std::println("[{:6}] - {:16} 자원수 : {:3}, 주소 : {:12} 자원의 주소 : {:12}", id, "복사할당연산자", s, (void*)this, (void*)d.get()); }
	return *this;
}

STRING::STRING(STRING&& other)
	:s{other.s}, id{gid++}
{
	d.reset(other.d.release());
	if (관찰) { std::println("[{:6}] - {:16} 자원수 : {:3}, 주소 : {:12} 자원의 주소 : {:12}", id, "이동생성자", s, (void*)this, (void*)d.get()); }
}

STRING& STRING::operator=(STRING&& other)
{
	if (this == &other)		//& addressof
		return *this;
	d.release();
	d.reset(other.d.release());
	s = other.size();
	if (관찰) { std::println("[{:6}] - {:16} 자원수 : {:3}, 주소 : {:12} 자원의 주소 : {:12}", id, "이동할당연산자", s, (void*)this, (void*)d.get()); }
	return *this;
}

bool STRING::operator<(const STRING& other) const
{
	// 사전식 정렬
	return std::lexicographical_compare(d.get(), d.get() + s, &other.d[0], &other.d[other.s]);
}

bool STRING::operator==(const STRING& other) const
{
	//if (s != other.s) return false;
	//
	//for (size_t i = 0; i < s; i++)
	//{
	//	if (d[i] != other.d[i]) return false;
	//}
	//// for문은 삽질
	//return true;

	return std::equal(d.get(), d.get() + s, &other.d[0], &other.d[other.s]);
}

size_t STRING::size() const {
	return s;
}

char* STRING::begin() const
{
	return d.get();
}

char* STRING::end() const
{
	return d.get() + s;
}

char* STRING::rbegin() const
{
	return d.get() + s -1;
}

char* STRING::rend() const
{
	return d.get()-1;
}

 std::ostream& operator<<(std::ostream& os, const STRING& str) {
	 for (size_t i = 0; i < str.s; i++)
	 {
		 os << str.d[i];
	 }
	 return os;
}

 std::istream& operator>>(std::istream& is, STRING& str)
 {
	 std::string s;
	 is >> s;
	 str.s = s.size();
	 str.d.release();
	 str.d = std::make_unique<char[]>(str.s);
	 memcpy(str.d.get(), s.data(), str.s);
	 return is;
 }
