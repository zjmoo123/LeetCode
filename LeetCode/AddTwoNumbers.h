#ifndef _ADD_TWO_NUMBERS_H_
#define _ADD_TWO_NUMBERS_H_
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
class AddTwoNumbers
{
public:
	AddTwoNumbers();
	~AddTwoNumbers();
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
	ListNode* Answer(ListNode* l1, ListNode* l2);
};

#endif //_ADD_TWO_NUMBERS_H_
