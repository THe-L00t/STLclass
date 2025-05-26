//-------------------------------------------
// STRING.h - STL의 동작을 이해하기 위한 class / std::string과 유사하게 작성
//
//	2025. 04. 10 - 시작
//-------------------------------------------
#pragma once

#include <iostream>	
#include <memory>
#include <print>

// iterator adaptor - 반복자의 인터페이스를 제공하지만 실제로는 다르게 동작
// 표준 반복자라면 해야할 다섯 가지 타입을 제공한다.
class STRING_Iterator {
public:
	using difference_type = std::ptrdiff_t;
	using value_type = char;
	using pointer = char*;
	using reference = char&;
	using iterator_category = std::random_access_iterator_tag;
public:
	STRING_Iterator() = default;
	STRING_Iterator(char* p)
		:p{ p } {
	}
	
	// 이건 의미를 제대로 코딩해야한다. 
	/*void operator++() {
		++p;
	}*/
	/*void operator--() {
		--p;
	}*/
	char& operator*() {	// l-value여야하기 때문에 & 리턴 및 const 제거
		return *p;
	}
	/*bool operator==(const STRING_Iterator& rhs) const {
		return p == rhs.p;
	}*/
	

	
	//sort가 동작하도록 필요 연산자 추가

	difference_type operator-(const STRING_Iterator& rhs) const {
		return p - rhs.p;	// 연산의 결과가 클래스의 불변성(invariants)을 해치나 관찰 
	}

	STRING_Iterator& operator++() {
		++p;
		return *this;
	}
	STRING_Iterator& operator--() {
		--p;
		return *this;
	}

	/*STRING_Iterator& operator+=(const difference_type off) {
		p += off;
		return *this;
	}

	STRING_Iterator operator+(const difference_type& rhs) const {
		return STRING_Iterator(p + rhs);
	}

	STRING_Iterator operator-(const difference_type& rhs) const {
		return STRING_Iterator(p - rhs);
	}

	difference_type operator-(const STRING_Iterator& rhs) const {
		return p - rhs.p;
	}

	friend STRING_Iterator operator+(const difference_type& off, STRING_Iterator next) {
		next += off;
		return next;
	}*/
	

	bool operator<(const STRING_Iterator& rhs) const {
		return *p < *(rhs.p);
	}
	
	// 모든 relational operation을 할 수 있게  <=>을 정의해본다
	// < , <= , ==, !=, >=, >
	auto operator<=>(const STRING_Iterator& rhs) const {
		return p <=> rhs.p;
	}


private:
	char* p{};	// = nullptr
};

class STRING_Reverse_Iterator {
public:
	using difference_type = std::ptrdiff_t;
	using value_type = char;
	using pointer = char*;
	using reference = char&;
	using iterator_category = std::random_access_iterator_tag;

public:
	explicit STRING_Reverse_Iterator(char* p)
		:p{ p } {
	}
	// 반복자라면 제공해야할 기본동작이 있다. 
	void operator++() {
		--p;
	}
	char operator*() const{
		return *(p - 1);
	}
	bool operator==(const STRING_Reverse_Iterator& rhs) const{
		return p == rhs.p;
	}
	
	//operator<=>()	//spaceship연산자, 3방향 비교연산자 

private:
	char* p;
};

class STRING {
public:
	// 스페셜 함수들
	STRING();
	~STRING();
	STRING(const char* );

	//복사생성자와 복사할당연산자 2025.4.10
	STRING(const STRING& );
	STRING& operator=(const STRING& );

	//이동생성자와 이동할당연산자 2025.4.14
	STRING(STRING&& );
	STRING& operator=(STRING&& );

	bool operator<(const STRING& ) const;
	bool operator==(const STRING&) const;

	// 인터페이스 함수들
	size_t size() const;

	STRING_Iterator begin() const;
	STRING_Iterator end() const;

	STRING_Reverse_Iterator rbegin() const;
	STRING_Reverse_Iterator rend() const;
	
private:
	size_t s{};
	std::unique_ptr<char[]> d{};
	size_t id;

	friend std::ostream& operator<<(std::ostream& , const STRING& );
	friend std::istream& operator>>(std::istream& , STRING& );
	static size_t gid;
};