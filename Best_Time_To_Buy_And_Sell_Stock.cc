int maxProfit(int* prices, int pricesSize) {

	int maxProfit=0,tmpMaxProfit=0;

	for(int i=0;i<pricesSize-1;i++)

	{

		tmpMaxProfit+=prices[i+1]-prices[i];



		if(tmpMaxProfit<0)

		{

			tmpMaxProfit=0;

		}

		if(tmpMaxProfit>maxProfit)

		{

			maxProfit=tmpMaxProfit;

		}



	}

	return maxProfit;

}
