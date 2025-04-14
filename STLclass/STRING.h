//-------------------------------------------
// STRING.h - STL�� ������ �����ϱ� ���� class / std::string�� �����ϰ� �ۼ�
//
//	2025. 04. 10 - ����
//-------------------------------------------
#pragma once

#include <iostream>	
#include <memory>
#include <print>

class STRING {
public:
	// ����� �Լ���
	STRING();
	~STRING();
	STRING(const char* p);

	//��������ڿ� �����Ҵ翬���� 2025.4.10
	STRING(const STRING& other);
	STRING& operator=(const STRING& other);

	//�̵������ڿ� �̵��Ҵ翬���� 2025.4.14
	STRING(STRING&& other);
	STRING& operator=(STRING&& other);

	bool operator<(const STRING& other);

	// �������̽� �Լ���
	size_t size() const;
	
private:
	size_t s{};
	std::unique_ptr<char[]> d{};
	size_t id;

	friend std::ostream& operator<<(std::ostream& os, const STRING& str);
	static size_t gid;
};