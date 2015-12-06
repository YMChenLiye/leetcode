int majorityElement(int* nums, int numsSize) {

	int currNum=0;

	int cnt=0;

	for(int i=0;i<numsSize;i++)

	{

		if(cnt==0)

		{

			currNum=nums[i];

			cnt++;

		}

		else

		{

			if(currNum==nums[i])

			{

				cnt++;

			}

			else

			{

				cnt--;

			}

		}

	}

	return currNum;

}
