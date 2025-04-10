//-------------------------------------------
// STRING.h - STL�� ������ �����ϱ� ���� class / std::string�� �����ϰ� �ۼ�
//
//	2025. 04. 10 - ����
//-------------------------------------------
#pragma once

#include <iostream>	
#include <memory>

class STRING {
public:
	// ����� �Լ���
	STRING(const char* p);
	STRING(const STRING& other);

	STRING& operator=(const STRING& other);

	// �������̽� �Լ���
	size_t size() const;
private:
	size_t s{};
	std::unique_ptr<char[]> d{};
	friend std::ostream& operator<<(std::ostream& os, const STRING& str)
};