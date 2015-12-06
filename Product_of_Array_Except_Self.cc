/**

 * Return an array of size *returnSize.

 * Note: The returned array must be malloced, assume caller calls free().

 */

int* productExceptSelf(int* nums, int numsSize, int* returnSize) {

	int *outPut=(int *)malloc(sizeof(int)*numsSize);

	outPut[0]=1;

	for(int i=1;i<numsSize;i++)

	{

		outPut[i]=outPut[i-1]*nums[i-1];

	}

	int right=1;

	for(int i=numsSize-1;i>=0;i--)

	{

		outPut[i] *= right;

		right *= nums[i];

	}

	*returnSize=numsSize;

	return outPut;

}
