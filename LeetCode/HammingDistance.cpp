#include "stdafx.h"
#include "HammingDistance.h"
#include <iostream>
#include <list>
using namespace std;
HammingDistance::HammingDistance()
{

}
HammingDistance::~HammingDistance()
{

}

int HammingDistance::GetHammingDistance(int x, int y)
{
	list<int> vx;
	list<int> vy;
	int z = 0, m = 0;
	while (x != 0 || y != 0)
	{
		if (x == 0)
		{
			vx.push_front(0);
		}
		else
		{
			vx.push_front(x % 2);
			x = x >> 1;
		}
		if (y == 0)
		{
			vy.push_front(0);
		}
		else
		{
			vy.push_front(y % 2);
			y = y >> 1;
		}
		z++;
	}
	cout << "z: " << z << endl;
	for (int i = 1; i <= z; i++)
	{
		cout << "vx: " << vx.front() << endl;
		cout << "vy: " << vy.front() << endl;
		if (vx.front() != vy.front())
		{
			m++;
		}
		vx.pop_front();
		vy.pop_front();
	}
	return m;
}

int HammingDistance::Answer(int x, int y)
{
	int dist = 0, n = x ^ y;
	while (n) {
		++dist;
		n &= n - 1;
	}
	return dist;
}