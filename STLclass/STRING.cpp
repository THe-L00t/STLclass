//-------------------------------------------
// STRING.h - STL�� ������ �����ϱ� ���� class / std::string�� �����ϰ� �ۼ�
//
//	2025. 04. 10 - ����
//  2025. 04. 14 - ������ ���� �������� ����
//  2025. 04. 14 - �̵��ǹ̷� 
//  2025. 05. 01 - opretor==
//  2025. 05. 15 - ������ ���� ����
//  2025. 05. 15 - begin(), end() ����
//  2025. 05. 19 - rbegins(), rend() ����
//-------------------------------------------

#include <algorithm>
#include "STRING.h"

size_t STRING::gid{ 0 };
bool ����{ false };

STRING::STRING()
	:id{ gid++ }
{
	if (����) { std::println("[{:6}] - {:16} �ڿ��� : {:3}, �ּ� : {:12} �ڿ��� �ּ� : {:12}", id, "����Ʈ������", s, (void*)this, (void*)d.get()); }
}
STRING::~STRING()
{
	if (����)std::println("[{:6}] - {:16}", id, "�Ҹ���");
}
STRING::STRING(const char* p)
	: s{ strlen(p) }, d{ std::make_unique<char[]>(s) }, id{ gid++ } {
	//d.release();   ����Ʈ �ʱ�ȭ�� ��� ����
	memcpy(d.get(), p, s);		//DMA �� �����ϴ�. 
	if (����) { std::println("[{:6}] - {:16} �ڿ��� : {:3}, �ּ� : {:12} �ڿ��� �ּ� : {:12}", id, "������", s, (void*)this, (void*)d.get()); }
}

STRING::STRING(const STRING& other) 
	: s{ other.s } {
	id = gid++;
	*this = other;
	/*d = std::make_unique<char[]>(s);
	memcpy(d.get(), other.d.get(), s);*/
	if (����) { std::println("[{:6}] - {:16} �ڿ��� : {:3}, �ּ� : {:12} �ڿ��� �ּ� : {:12}", id, "���������", s, (void*)this, (void*)d.get()); }
}

STRING& STRING::operator=(const STRING& other) {
	if (this == &other)		//& addressof
		return *this;
	d.release();
	s = other.size();
	d = std::make_unique<char[]>(s);
	memcpy(d.get(), other.d.get(), s);
	
	if (����) { std::println("[{:6}] - {:16} �ڿ��� : {:3}, �ּ� : {:12} �ڿ��� �ּ� : {:12}", id, "�����Ҵ翬����", s, (void*)this, (void*)d.get()); }
	return *this;
}

STRING::STRING(STRING&& other)
	:s{other.s}, id{gid++}
{
	d.reset(other.d.release());
	if (����) { std::println("[{:6}] - {:16} �ڿ��� : {:3}, �ּ� : {:12} �ڿ��� �ּ� : {:12}", id, "�̵�������", s, (void*)this, (void*)d.get()); }
}

STRING& STRING::operator=(STRING&& other)
{
	if (this == &other)		//& addressof
		return *this;
	d.release();
	d.reset(other.d.release());
	s = other.size();
	if (����) { std::println("[{:6}] - {:16} �ڿ��� : {:3}, �ּ� : {:12} �ڿ��� �ּ� : {:12}", id, "�̵��Ҵ翬����", s, (void*)this, (void*)d.get()); }
	return *this;
}

bool STRING::operator<(const STRING& other) const
{
	// ������ ����
	return std::lexicographical_compare(d.get(), d.get() + s, &other.d[0], &other.d[other.s]);
}

bool STRING::operator==(const STRING& other) const
{
	//if (s != other.s) return false;
	//
	//for (size_t i = 0; i < s; i++)
	//{
	//	if (d[i] != other.d[i]) return false;
	//}
	//// for���� ����
	//return true;

	return std::equal(d.get(), d.get() + s, &other.d[0], &other.d[other.s]);
}

size_t STRING::size() const {
	return s;
}

char* STRING::begin() const
{
	return d.get();
}

char* STRING::end() const
{
	return d.get() + s;
}

char* STRING::rbegin() const
{
	return d.get() + s -1;
}

char* STRING::rend() const
{
	return d.get()-1;
}

 std::ostream& operator<<(std::ostream& os, const STRING& str) {
	 for (size_t i = 0; i < str.s; i++)
	 {
		 os << str.d[i];
	 }
	 return os;
}

 std::istream& operator>>(std::istream& is, STRING& str)
 {
	 std::string s;
	 is >> s;
	 str.s = s.size();
	 str.d.release();
	 str.d = std::make_unique<char[]>(str.s);
	 memcpy(str.d.get(), s.data(), str.s);
	 return is;
 }
