//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					3�� 10�� ������		(4�� 2��)
//---------------------------------------------------------------------------//
//
//	CALLABLE TYPES - ȣ�Ⱑ���� Ÿ��
//  1. �Լ�
// 
//---------------------------------------------------------------------------
//
// 
#INCLUDE <IOSTREAM>	
#INCLUDE <FSTREAM>
#INCLUDE <NUMERIC>
#INCLUDE <MEMORY>
#INCLUDE "SAVE.H"
 
// [����] "����.CPP"������ �ҹ��ڸ� �빮�ڷ� ��ȯ�Ͽ� "���� �빮��.CPP"�� �����϶� 
INT MAIN( ) 
{
	
	STD::IFSTREAM IN{ "MAIN.CPP" };
	IF (NOT IN) RETURN 404;
	STD::OFSTREAM OUT{ "���� �빮��.CPP" };

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


