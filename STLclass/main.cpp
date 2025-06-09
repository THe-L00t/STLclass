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
    std::unordered_set<STRING,std::hash<STRING>> us{ "1", "22", "333", "4444"};

    us.insert("55555");
    for (const STRING& s : us) {
        std::cout << s << std::endl;
    }

    std::cout << std::hash<STRING>{}("55555") << std::endl;
    std::cout << std::hash<std::string>{}("55555") << std::endl;
 	save("main.cpp");
}

