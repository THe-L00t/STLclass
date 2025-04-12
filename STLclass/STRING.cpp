//-------------------------------------------
// STRING.h - STL�� ������ �����ϱ� ���� class / std::string�� �����ϰ� �ۼ�
//
//	2025. 04. 10 - ����
//-------------------------------------------

#include "STRING.h"

size_t STRING::gid{ 0 };

STRING::STRING()
	:id{ gid++ }
{
	std::println("[{:6}] - {:16} ", id, "������");
}
STRING::~STRING()
{
	std::println("[{:6}] - {:16}", id, "�Ҹ���");
}
STRING::STRING(const char* p)
	: s{ strlen(p) }, d{ std::make_unique<char[]>(s) }, id{ gid++ } {
	//d.release();   ����Ʈ �ʱ�ȭ�� ��� ����
	memcpy(d.get(), p, s);		//DMA �� �����ϴ�. 
	std::println("[{:6}] - {:16}", id, "������");
}

STRING::STRING(const STRING& other) 
	: s{ other.s } {
	*this = other;
	/*d = std::make_unique<char[]>(s);
	memcpy(d.get(), other.d.get(), s);*/
	std::println("[{:6}] - {:16}", id, "���������");
}

STRING& STRING::operator=(const STRING& other) {
	if (this == &other)		//& addressof
		return *this;
	d.release();
	s = other.size();
	d = std::make_unique<char[]>(s);
	memcpy(d.get(), other.d.get(), s);
	id = gid++;
	std::println("[{:6}] - {:16}", id, "�����Ҵ翬����");
	return *this;
}

size_t STRING::size() const {
	return s;
}

 std::ostream& operator<<(std::ostream& os, const STRING& str) {
	return os << str.d.get();
}