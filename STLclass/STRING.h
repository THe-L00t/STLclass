//-------------------------------------------
// STRING.h - STL의 동작을 이해하기 위한 class / std::string과 유사하게 작성
//
//	2025. 04. 10 - 시작
//-------------------------------------------
#pragma once

#include <iostream>	
#include <memory>
#include <print>

class STRING {
public:
	// 스페셜 함수들
	STRING();
	~STRING();
	STRING(const char* p);

	//복사생성자와 복사할당연산자 2025.4.10
	STRING(const STRING& other);
	STRING& operator=(const STRING& other);

	//이동생성자와 이동할당연산자 2025.4.14
	STRING(STRING&& other);
	STRING& operator=(STRING&& other);

	bool operator<(const STRING& other);

	// 인터페이스 함수들
	size_t size() const;
	
private:
	size_t s{};
	std::unique_ptr<char[]> d{};
	size_t id;

	friend std::ostream& operator<<(std::ostream& os, const STRING& str);
	static size_t gid;
};