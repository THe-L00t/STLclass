//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					4�� 3�� ������		(7�� 1��)
// 8�� 1�� �߰���� (4�� 24�� �����) - 30��
//---------------------------------------------------------------------------//
//
// STL containers - Contianers are objects that store other objects.
// array
// vector
//---------------------------------------------------------------------------
//
// 
#include <iostream>	
#include <vector>
#include <memory>
#include <string>
#include <algorithm>
#include <fstream>
#include "save.h"
#include "STRING.h"

extern bool ����;


int main( ) 
{
    ���� = true;
    std::vector<STRING> v;


   //STRING s{ "12345" };
    v.emplace_back("12345"); 
    // �̵����� ���� �ʰ� ���� ������ free store�� ������ ȣ��
    // ���� emplace_back( �������� ���ڸ� );

 	save("main.cpp");
}

