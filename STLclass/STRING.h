//-------------------------------------------
// STRING.h - STL�� ������ �����ϱ� ���� class / std::string�� �����ϰ� �ۼ�
//
//	2025. 04. 10 - ����
//-------------------------------------------
#pragma once

#include <iostream>	
#include <memory>
#include <print>

// iterator adaptor - �ݺ����� �������̽��� ���������� �����δ� �ٸ��� ����
// ǥ�� �ݺ��ڶ�� �ؾ��� �ټ� ���� Ÿ���� �����Ѵ�.
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
	
	// �̰� �ǹ̸� ����� �ڵ��ؾ��Ѵ�. 
	/*void operator++() {
		++p;
	}*/
	/*void operator--() {
		--p;
	}*/
	char& operator*() {	// l-value�����ϱ� ������ & ���� �� const ����
		return *p;
	}
	/*bool operator==(const STRING_Iterator& rhs) const {
		return p == rhs.p;
	}*/
	

	
	//sort�� �����ϵ��� �ʿ� ������ �߰�

	difference_type operator-(const STRING_Iterator& rhs) const {
		return p - rhs.p;	// ������ ����� Ŭ������ �Һ���(invariants)�� ��ġ�� ���� 
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
	
	// ��� relational operation�� �� �� �ְ�  <=>�� �����غ���
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
	// �ݺ��ڶ�� �����ؾ��� �⺻������ �ִ�. 
	void operator++() {
		--p;
	}
	char operator*() const{
		return *(p - 1);
	}
	bool operator==(const STRING_Reverse_Iterator& rhs) const{
		return p == rhs.p;
	}
	
	//operator<=>()	//spaceship������, 3���� �񱳿����� 

private:
	char* p;
};

class STRING {
public:
	// ����� �Լ���
	STRING();
	~STRING();
	STRING(const char* );

	//��������ڿ� �����Ҵ翬���� 2025.4.10
	STRING(const STRING& );
	STRING& operator=(const STRING& );

	//�̵������ڿ� �̵��Ҵ翬���� 2025.4.14
	STRING(STRING&& );
	STRING& operator=(STRING&& );

	bool operator<(const STRING& ) const;
	bool operator==(const STRING&) const;

	// �������̽� �Լ���
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