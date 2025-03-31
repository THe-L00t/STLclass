//---------------------------------------------------------------------------//
// 2025.   1.  STL 월 910 목 910					3월 10일 월요일		(4주 2일)
//---------------------------------------------------------------------------//
//
//	CALLABLE TYPES - 호출가능한 타입
//  1. 함수
// 
//---------------------------------------------------------------------------
//
// 
#INCLUDE <IOSTREAM>	
#INCLUDE <FSTREAM>
#INCLUDE <NUMERIC>
#INCLUDE <MEMORY>
#INCLUDE "SAVE.H"
 
// [문제] "메인.CPP"파일의 소문자를 대문자로 변환하여 "메인 대문자.CPP"에 저장하라 
INT MAIN( ) 
{
	
	STD::IFSTREAM IN{ "MAIN.CPP" };
	IF (NOT IN) RETURN 404;
	STD::OFSTREAM OUT{ "메인 대문자.CPP" };

	CHAR C;
	IN >> STD::NOSKIPWS;
	WHILE (IN >> C) {
		IF (ISLOWER(C)) {
			CHAR AL = TOUPPER(C);
			OUT << AL;
		}
		ELSE OUT << C;
	}

	SAVE("MAIN.CPP");

}


