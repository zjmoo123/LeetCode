#ifndef _TWO_SUM_H_
#define _TWO_SUM_H_


#include <vector>
using namespace std;
class TwoSum
{
public:
	TwoSum();
	~TwoSum();
	void GetTwoSum(vector<int>& nums, int target);
	vector<int> AnswerWithHashMap(vector<int>& nums, int target);
};

#endif // _TWO_SUM_H_
