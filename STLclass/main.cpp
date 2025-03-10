//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 수 910					3월 10일 월요일		(1주 2일)
//---------------------------------------------------------------------------//
//
//	한 학기 강의를 저장할 save기능 
// 
//---------------------------------------------------------------------------
//
// 
//
#include <iostream>
#include <string>
#include <fstream>

// [문제] save를 제대로 코딩해야죠!

void save( std::string_view);	


int main( char argc, char* argv) 
{
	std::cout << "2025년 1학기 STL" << std::endl;
	

	save("메인.cpp");
}

void save(std::string_view filename)
{
	// 1. 인자로 전달된 파일을 읽기모드로 연다.
	std::ifstream in{ filename.data()};	// 하위 호환성을 위해 최신의 기술을 맞춘다. 고로 string_view에서 data()를 이용하여 ifstream이 받아들일 수 있는 데이터만 뽑아낸다.
										// RAII  :  in.close()사용하지 않아도 됌
	if (not in) {						// !적지 말것
		std::cout << filename << "can't be opened." << std::endl;
		exit(20250310);
	}

	// 2. 쓰기 모드로 저장할 파일을 연다. 덧붙이기 모드로 
	// 3. 파일을 읽어서 저장할 파일에 덧붙인다. 

}
