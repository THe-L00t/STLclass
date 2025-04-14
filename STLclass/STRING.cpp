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
	std::println("[{:6}] - {:16} �ڿ��� : {:3}, �ּ� : {:12} �ڿ��� �ּ� : {:12}", id, "����Ʈ������", s, (void*)this, (void*)d.get());
}
STRING::~STRING()
{
	std::println("[{:6}] - {:16}", id, "�Ҹ���");
}
STRING::STRING(const char* p)
	: s{ strlen(p) }, d{ std::make_unique<char[]>(s) }, id{ gid++ } {
	//d.release();   ����Ʈ �ʱ�ȭ�� ��� ����
	memcpy(d.get(), p, s);		//DMA �� �����ϴ�. 
	std::println("[{:6}] - {:16} �ڿ��� : {:3}, �ּ� : {:12} �ڿ��� �ּ� : {:16}", id, "������", s, (void*)this,(void*)d.get());
}

STRING::STRING(const STRING& other) 
	: s{ other.s } {
	*this = other;
	/*d = std::make_unique<char[]>(s);
	memcpy(d.get(), other.d.get(), s);*/
	std::println("[{:6}] - {:16} �ڿ��� : {:3}, �ּ� : {:12} �ڿ��� �ּ� : {:12}", id, "���������", s, (void*)this, (void*)d.get());
}

STRING& STRING::operator=(const STRING& other) {
	if (this == &other)		//& addressof
		return *this;
	d.release();
	s = other.size();
	d = std::make_unique<char[]>(s);
	memcpy(d.get(), other.d.get(), s);
	id = gid++;
	std::println("[{:6}] - {:16} �ڿ��� : {:3}, �ּ� : {:12} �ڿ��� �ּ� : {:12}", id, "�����Ҵ翬����", s, (void*)this, (void*)d.get());
	return *this;
}

bool STRING::operator<(const STRING& other)
{
	return this->s < other.s;
}

size_t STRING::size() const {
	return s;
}

 std::ostream& operator<<(std::ostream& os, const STRING& str) {
	return os << str.d.get();
}