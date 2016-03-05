#include <vector>
using namespace std;

int searchInsert(vector<int> &nums,int target)
{
	int ret = 0;
	for(size_t i=0;i<nums.size();++i)
	{
		if( nums[i] < target)
		{
			++ret;
		}
		else
			return ret;
	}
	return ret;

}
