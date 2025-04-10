//-------------------------------------------
// STRING.h - STL의 동작을 이해하기 위한 class / std::string과 유사하게 작성
//
//	2025. 04. 10 - 시작
//-------------------------------------------
#pragma once

#include <iostream>	
#include <memory>

class STRING {
public:
	// 스페셜 함수들
	STRING() = default;
	STRING(const char* p);

	//복사생성자와 복사할당연산자 2025.4.10
	STRING(const STRING& other);

	STRING& operator=(const STRING& other);

	// 인터페이스 함수들
	size_t size() const;
private:
	size_t s{};
	std::unique_ptr<char[]> d{};


	friend std::ostream& operator<<(std::ostream& os, const STRING& str);
};