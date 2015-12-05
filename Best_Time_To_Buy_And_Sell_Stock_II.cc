int maxProfit(int* prices, int pricesSize) {

	int sum=0;

	int diff=0;

	for(int i=0;i<pricesSize-1;i++)

	{

		diff=prices[i+1]-prices[i];

		if(diff>0)

		{

			sum+=diff;

		}

	}

	return sum;

}
