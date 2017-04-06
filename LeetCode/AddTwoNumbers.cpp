#include "stdafx.h"
#include "AddTwoNumbers.h"

AddTwoNumbers::AddTwoNumbers()
{

}
AddTwoNumbers::~AddTwoNumbers()
{

}
ListNode* AddTwoNumbers::addTwoNumbers(ListNode* l1, ListNode* l2)
{
	ListNode* head =new ListNode(0);
	ListNode* list = head;
	while (l1 != nullptr && l2 !=nullptr)
	{
		int tempNum = l1->val + l2->val;
		if (tempNum<10)
		{
			ListNode* p = new ListNode(tempNum);
			list->next = p;
			list = p;
		}
		else if (tempNum>=10)
		{
			ListNode* p = new ListNode(tempNum%10);
			list->next = p;
			list = p;
			if (l1->next==nullptr)
			{
				if (l2->next==nullptr)
				{
					ListNode* p = new ListNode(1);
					list->next = p;
					list = p;
				}
				else
				{
					ListNode* temp = l2->next;
					temp->val++;
					while (temp->next)
					{
						if (temp->val>=10)
						{
							temp->val = temp->val % 10;
							temp->next->val++;
						}
						temp = temp->next;
					}
					if (temp->val>=10)
					{
						ListNode* p = new ListNode(1);
						temp->next = p;
						temp->val = temp->val % 10;
					}
				}
			}
			else
			{
				ListNode* temp = l1->next;
				temp->val++;
				while (temp->next)
				{
					if (temp->val >= 10)
					{
						temp->val = temp->val % 10;
						temp->next->val++;
					}
					temp = temp->next;
				}
				if (temp->val >= 10)
				{
					ListNode* p = new ListNode(1);
					temp->next = p;
					temp->val = temp->val % 10;
				}
			}
		}
		l1 = l1->next;
		l2 = l2->next;
	}
	if (l1==nullptr)
	{
		if (l2!=nullptr)
		{
			ListNode* p = l2;
			list->next = p;
		}
	}
	else
	{
		if (l2==nullptr)
		{
			ListNode* p = l1;
			list->next = p;
		}
	}
	return head->next;
}


ListNode* AddTwoNumbers::Answer(ListNode* l1, ListNode* l2)
{
	ListNode* sentienl = new ListNode(0);
	ListNode* d = sentienl;
	int sum = 0;
	while (l1 || l2)
	{
		sum /= 10;
		if (l1!=nullptr)
		{
			sum += l1->val;
			l1 = l1->next;
		}
		if (l2!=nullptr)
		{
			sum += l2->val;
			l2 = l2->next;
		}
		d->next = new ListNode(sum % 10);
		d = d->next;
	}
	if (sum/10==1)
	{
		d->next = new ListNode(1);
	}
	return sentienl->next;
}