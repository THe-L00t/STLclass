//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					3�� 10�� ������		(1�� 2��)
//---------------------------------------------------------------------------//
//
//	�� �б� ���Ǹ� ������ save��� 
// 
//---------------------------------------------------------------------------
//
// 
//
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <filesystem>	// �Ⱦ��� ������� �����,  �뷮 Ŀ��

// [����] save�� ����� �ڵ��ؾ���!

void save( std::string_view);	


int main( char argc, char* argv) 
{
	std::cout << "2025�� 1�б� STL" << std::endl;
	

	save("main.cpp");
}

void save(std::string_view filename)
{
	// 1. ���ڷ� ���޵� ������ �б���� ����.
	std::ifstream in{ filename.data()};	// ���� ȣȯ���� ���� �ֽ��� ����� �����. ��� string_view���� data()�� �̿��Ͽ� ifstream�� �޾Ƶ��� �� �ִ� �����͸� �̾Ƴ���.
										// RAII  :  in.close()������� �ʾƵ� ��
	if (not in) {						// !���� ����
		std::cout << filename << "can't be opened." << std::endl;
		exit(20250310);
	}

	// �����ߴٴ� ���� ȭ�鿡 ǥ��
	std::cout << filename << "(" << std::filesystem::file_size(filename) << "bytes) �����Ͽ����ϴ�." << std::endl;


	// 2. ���� ���� ������ ������ ����. �����̱� ���� 
	std::ofstream out{ "2025 1�б� STL ��910��910 ��������.txt", std::ios::app };		// {} uniform initializer



	// 3. ������ �о ������ ���Ͽ� �����δ�. 
	/*std::vector<char> v(std::filesystem::file_size(filename));
	std::copy(std::istreambuf_iterator{ in }, {}, v.begin());
	std::copy(v.begin(), v.end(), std::ostreambuf_iterator{ out });*/
	std::copy(std::istreambuf_iterator{ in }, {}, std::ostreambuf_iterator{ out });
	//constexpr : ������ �Ҷ� ~~�� ���� �ض� 
}
