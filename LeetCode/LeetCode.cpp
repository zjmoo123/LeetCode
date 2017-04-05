// LeetCode.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "HammingDistance.h"
#include "stdlib.h"
#include <iostream>

using namespace std;



//list<int> vx;
//list<int> vy;
//int z = 0, m = 0;
//while (x != 0 || y != 0)
//{
//	if (x == 0)
//	{
//		vx.push_front(0);
//	}
//	else
//	{
//		vx.push_front(x % 2);
//		x = x >> 1;
//	}
//	if (y == 0)
//	{
//		vy.push_front(0);
//	}
//	else
//	{
//		vy.push_front(y % 2);
//		y = y >> 1;
//	}
//	z++;
//}
//cout << "z: " << z << endl;
//for (int i = 1; i <= z; i++)
//{
//	cout << "vx: " << vx.front() << endl;
//	cout << "vy: " << vy.front() << endl;
//	if (vx.front() != vy.front())
//	{
//		m++;
//	}
//	vx.pop_front();
//	vy.pop_front();
//}
//return m;




int _tmain(int argc, _TCHAR* argv[])
{
	HammingDistance hammingDistance;
	int temp;
	temp = hammingDistance.GetHammingDistance(1, 30);
	cout << temp << endl;
	cout << hammingDistance.Answer(1, 30) << endl;
	system ("pause");
	return 0;
}

