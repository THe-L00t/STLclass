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
    v.push_back(STRING{"12345"});   // �̸����� ��ü�� ���ÿ� �����ȴ�
    // �����Ϸ��� �̸����� ��ü�� xvalue�� �Ǵ��Ѵ�. 

 	save("main.cpp");
}

