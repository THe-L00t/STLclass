#include "save.h"
#include <iostream>
#include <string_view>
#include <fstream>
#include <algorithm>
#include <filesystem>
#include <chrono>

void save(std::string_view filename)
{
	// 1. 인자로 전달된 파일을 읽기모드로 연다.
	std::ifstream in{ filename.data() };

	if (not in) {
		std::cout << filename << "can't be opened." << std::endl;
		exit(20250310);
	}

	// 저장했다는 것을 화면에 표시
	std::cout << filename << "(" << std::filesystem::file_size(filename) << "bytes) 저장하였습니다." << std::endl;


	// 2. 쓰기 모드로 저장할 파일을 연다. 덧붙이기 모드로 
	std::ofstream out{ "2025 1학기 STL 월910목910 강의저장.txt", std::ios::app };		// {} uniform initializer

	auto now = std::chrono::system_clock::now();	// epoch로 부터 경과된 tick 수를 얻는다.
	// epoch 시간의 기원 1970.1.1
	auto utc = std::chrono::system_clock::to_time_t(now);	// UTC
	auto lt = std::localtime(&utc);							// C언어로 만들어진 함수라 레퍼런스 사용 불가, 그래서 &를 붙여 주소를 넘겨주어야 한다. * 지역시간으로 변경
	auto old = out.imbue(std::locale("ko_KR"));						// 해당 객체를 각 지역에 맞게 바꾸어 버리는 것


	using namespace std::chrono_literals;
	now += 9h;

	out << '\n' << '\n';
	out << "=================================================" << '\n';
	out << " 저장한 시간 : " << std::put_time(lt, "%c %A") << '\n';
	out << "=================================================" << '\n';
	out << '\n';

	out.imbue(old);											// 스트림의 지역을 변경 이전으로 복원
	// 3. 파일을 읽어서 저장할 파일에 덧붙인다. 
	std::copy(std::istreambuf_iterator{ in }, {}, std::ostreambuf_iterator{ out });
}
