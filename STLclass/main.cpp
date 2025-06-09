//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					6�� 5�� �����		(13�� 2��)
// 2025. 6. 19 �⸻ ����
// 2025. 5. 12 ������ - ������ǰ �߰���ǥ
//---------------------------------------------------------------------------//
//  Unordered Associative Container - hash ���
//  
//  
//---------------------------------------------------------------------------
//
// 
#include <iostream>
#include <unordered_set>
#include <string>
#include <print>
#include "save.h"
#include "STRING.h"

extern bool ����;

// const consistency
template<>
struct std::hash<STRING> {
    size_t operator()(const STRING& t)const {
        return std::hash<std::string>{}(std::string(t.begin(),t.end()));//STRING �� std::string���� �ٲپ� �����ϸ� �̻����̴�. ;
    }
};

int main( ) 
{
    std::unordered_set<STRING> us{ "1", "22", "333", "4444"};

    // ������� ���� �޸� ������ �״�� ȭ�鿡 ����Ѵ�. 
    // VS�� vector[N] + list *N
    while (true) {
        for (size_t bc = 0; bc < us.bucket_count(); ++bc) {
            std::print("[{:3}]", bc);
            for (auto i = us.begin(bc); i not_eq us.end(bc); ++i) {
                std::print(" <-> {:}", std::string(i->begin(), i->end()));  //����� ����Ʈ�̴�.
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
        std::cout << "�߰��� STRING�� �Է��ϼ��� : ";
        STRING s;
        std::cin >> s;
    }

 	save("main.cpp");
}

