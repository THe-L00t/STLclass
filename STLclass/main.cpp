//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					4�� 3�� ������		(5�� 2��)
// 8�� 1�� �߰���� (4�� 24�� �����) - 30��
// 6�� 1�� �������� (4�� 10�� �����) - 30��
//---------------------------------------------------------------------------//
//
// class STRING �ۼ� ���� - std::string�� ������ ������ �Ѵ�.  
//
//
//---------------------------------------------------------------------------
//
// 
#include <iostream>	
#include <string>
#include <memory>
#include "save.h"

class STRING {
public:
	STRING(const char* p) : s{ strlen(p) }, d{ std::make_unique<char[]>(s) } {
		//d.release();   ����Ʈ �ʱ�ȭ�� ��� ����
		memcpy(d.get(), p, s);		//DMA �� �����ϴ�. 
	}

	const STRING& operator=(const STRING& rhs) {
		d = std::make_unique<char[]>(rhs.size());
		memcpy(d.get(), rhs.d.get(), s);
		s = rhs.size();
		return *this;
	}
	size_t size() const{
		return s;
	}
private:
	size_t s{};
	std::unique_ptr<char[]> d{};

	friend std::ostream& operator<<(std::ostream& os, const STRING& str) {
		return os << str.d.get();
	}
};

int main( ) 
{
	STRING s{ "std::string�� ������ Ŭ����" };

	std::cout << "s�� �����ϴ� �ڿ��� ����Ʈ �� :" << s.size() << std::endl;
	//STRING t = s;

	//std::cout << t << std::endl;
	std::cout << s << std::endl;
	save("main.cpp");

}
// __cedcl : c��� �Լ� ���� ���� ���

