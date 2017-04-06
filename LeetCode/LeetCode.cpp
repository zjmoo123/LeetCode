// LeetCode.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "HammingDistance.h"
#include "TwoSum.h"
#include "AddTwoNumbers.h"
#include <vector>
#include "stdlib.h"
#include <iostream>

using namespace std;


ListNode* createLinkListTail(int n) {
	ListNode* p = new ListNode(0);
	ListNode* r = new ListNode(0);
	ListNode* list = nullptr;
	int i;

	for (i = 0; i < n; i++) {
		p->val = i + 1;
		p->next = nullptr;
		if (!list) {
			list = p;
		}
		else {
			r->next = p;
		}
		r = p;
	}
	return list;
}


int _tmain(int argc, _TCHAR* argv[])
{
	HammingDistance hammingDistance;
	int temp;
	temp = hammingDistance.GetHammingDistance(1, 30);
	cout << temp << endl;

	vector<int> nums;
	nums.push_back(2);
	nums.push_back(7);
	nums.push_back(11);
	nums.push_back(15);
	TwoSum twoSum;
	twoSum.GetTwoSum(nums, 18);

	ListNode l1(2);
	
	
	ListNode k1(8);
	ListNode k2(9);
	ListNode k3(9);
	k1.next = &k2;
	k2.next = &k3;

	AddTwoNumbers addTwoNumbers;
	ListNode* result=addTwoNumbers.addTwoNumbers(&l1, &k1);


	system ("pause");
	return 0;
}

