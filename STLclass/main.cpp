//---------------------------------------------------------------------------//
// 2025.   1.  STL �� 910 �� 910					4�� 3�� ������		(8�� 2��)
// 
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
    int a[10];
    
    for (int i = -10; i < 10; i++) //�� ��� �б�� ���Ⱑ �ٸ��� �����Ѵ�.
    {//������ ��� �״´�
        std::cout << a[i] << std::endl; //�б��� ��� c++�� �޸� ������ ��� ����ϱ⿡ ���������� �����Ѵ�.  
    }

 	save("main.cpp");
}

