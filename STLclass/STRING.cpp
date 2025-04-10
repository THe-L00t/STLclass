//-------------------------------------------
// STRING.h - STL�� ������ �����ϱ� ���� class / std::string�� �����ϰ� �ۼ�
//
//	2025. 04. 10 - ����
//-------------------------------------------

#include "STRING.h"
STRING::STRING(const char* p) 
	: s{ strlen(p) }, d{ std::make_unique<char[]>(s) } {
	//d.release();   ����Ʈ �ʱ�ȭ�� ��� ����
	memcpy(d.get(), p, s);		//DMA �� �����ϴ�. 
}

STRING::STRING(const STRING& other) 
	: s{ other.s } {
	*this = other;
	/*d = std::make_unique<char[]>(s);
	memcpy(d.get(), other.d.get(), s);*/
}

STRING& STRING::operator=(const STRING& other) {
	if (this == &other)		//& addressof
		return *this;
	d.release();
	s = other.size();
	d = std::make_unique<char[]>(s);
	memcpy(d.get(), other.d.get(), s);
	return *this;
}

size_t STRING::size() const {
	return s;
}

 std::ostream& operator<<(std::ostream& os, const STRING& str) {
	return os << str.d.get();
}