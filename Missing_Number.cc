int missingNumber(int* nums, int numsSize) {

	int sum=0;

	for(int i=0;i<numsSize;i++)

	{

		sum += nums[i];

	}

	return ((0+numsSize)*(1+numsSize))/2-sum;



}
