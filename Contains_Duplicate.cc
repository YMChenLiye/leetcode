bool containsDuplicate(int* nums, int numsSize) {

	for(int i=0;i<numsSize;i++)

	{

		int tmp=nums[i];

		for(int j=i+1;j<numsSize;j++)

		{

			if(tmp==nums[j])

			{

				return true;

			}

		}

	}

	return false;

}
