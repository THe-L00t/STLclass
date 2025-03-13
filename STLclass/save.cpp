#include "save.h"
#include <iostream>
#include <string_view>
#include <fstream>
#include <algorithm>
#include <filesystem>
#include <chrono>

void save(std::string_view filename)
{
	// 1. ���ڷ� ���޵� ������ �б���� ����.
	std::ifstream in{ filename.data() };

	if (not in) {
		std::cout << filename << "can't be opened." << std::endl;
		exit(20250310);
	}

	// �����ߴٴ� ���� ȭ�鿡 ǥ��
	std::cout << filename << "(" << std::filesystem::file_size(filename) << "bytes) �����Ͽ����ϴ�." << std::endl;


	// 2. ���� ���� ������ ������ ����. �����̱� ���� 
	std::ofstream out{ "2025 1�б� STL ��910��910 ��������.txt", std::ios::app };		// {} uniform initializer

	auto now = std::chrono::system_clock::now();	// epoch�� ���� ����� tick ���� ��´�.
	// epoch �ð��� ��� 1970.1.1
	auto utc = std::chrono::system_clock::to_time_t(now);	// UTC
	auto lt = std::localtime(&utc);							// C���� ������� �Լ��� ���۷��� ��� �Ұ�, �׷��� &�� �ٿ� �ּҸ� �Ѱ��־�� �Ѵ�. * �����ð����� ����
	auto old = out.imbue(std::locale("ko_KR"));						// �ش� ��ü�� �� ������ �°� �ٲپ� ������ ��


	using namespace std::chrono_literals;
	now += 9h;

	out << '\n' << '\n';
	out << "=================================================" << '\n';
	out << " ������ �ð� : " << std::put_time(lt, "%c %A") << '\n';
	out << "=================================================" << '\n';
	out << '\n';

	out.imbue(old);											// ��Ʈ���� ������ ���� �������� ����
	// 3. ������ �о ������ ���Ͽ� �����δ�. 
	std::copy(std::istreambuf_iterator{ in }, {}, std::ostreambuf_iterator{ out });
}
