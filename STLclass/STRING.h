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
	STRING(const char* );

	//��������ڿ� �����Ҵ翬���� 2025.4.10
	STRING(const STRING& );
	STRING& operator=(const STRING& );

	//�̵������ڿ� �̵��Ҵ翬���� 2025.4.14
	STRING(STRING&& );
	STRING& operator=(STRING&& );

	bool operator<(const STRING& );

	// �������̽� �Լ���
	size_t size() const;
	
private:
	size_t s{};
	std::unique_ptr<char[]> d{};
	size_t id;

	friend std::ostream& operator<<(std::ostream& , const STRING& );
	friend std::istream& operator>>(std::istream& , STRING& );
	static size_t gid;
};