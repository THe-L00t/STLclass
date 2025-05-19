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
class STRING_Reverse_Iterator {
public:
	STRING_Reverse_Iterator(char* p)
		:p{ p } {
	}
	// �ݺ��ڶ�� �����ؾ��� �⺻������ �ִ�. 




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

	char* begin() const;
	char* end() const;

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