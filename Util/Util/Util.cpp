// Util.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <vector>
#include <iostream>
struct VectorStuct{
	//std::vector<int> vec;
	int num;
};

int _tmain(int argc, _TCHAR* argv[])
{
	VectorStuct _vec;
	int nd = sizeof(_vec);
	std::cout << nd;
	memset(&_vec, 0, sizeof(_vec));
	//_vec.vec.clear();
	return 0;
}

