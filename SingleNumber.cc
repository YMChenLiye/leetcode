#include <stdio.h>


int singleNumber(int *nums,int numSize)
{
	int x=0;
	for(int i=0;i<numSize;i++)
	{
		x ^= nums[i];
	}
	return x;
}

int main()
{

}
