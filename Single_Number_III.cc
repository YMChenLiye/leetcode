/**

 * Return an array of size *returnSize.

 * Note: The returned array must be malloced, assume caller calls free().

 */

int* singleNumber(int* nums, int numsSize, int* returnSize) {

	int all=0;

	for(int i=0;i<numsSize;i++)

	{

		all ^= nums[i];

	}

	int lowbit=all & -all;//得到最后亦或所有值的最低位不是0的数，用这一位来将所有的数分成2组

	int result1=0,result2=0;

	for(int i=0;i<numsSize;i++)

	{

		if(nums[i] &lowbit)

		{

			result1 ^= nums[i];

		}

		else

		{

			result2 ^= nums[i];

		}

	}

	*returnSize=2;

	int *arr=malloc(sizeof(int)*2);

	arr[0]=result1;

	arr[1]=result2;

	return arr;

}
