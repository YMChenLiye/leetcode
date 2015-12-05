#include <iostream>



int maxProfit(int* prices, int pricesSize) {
    int maxProfit=0;
    int currProfit=0;
    int index1=0,index2=0;
    int tmpIndex=0;
    for(int i=0;i<pricesSize-1;i++)
    {
        currProfit+=(prices[i+1]-prices[i]);
        if(currProfit<0)
        {
            currProfit=0;
            tmpIndex=i+1;
        }
        if(currProfit>maxProfit)
        {
            index1=tmpIndex;
            maxProfit=currProfit;
            index2=i+1;
        }
        
    }
    currProfit=0;
    int profit1=0,profit2=0;
    for(int i=0;i<index1-1;i++)
    {
        currProfit+=(prices[i+1]-prices[i]);
        if(currProfit<0)
        {
            currProfit=0;
        }
        if(currProfit>profit1)
        {
            profit1=currProfit;
        }
    }
    currProfit=0;
    for(int i=index2+1;i<pricesSize;i++)
    {
        currProfit+=(prices[i+1]-prices[i]);
        if(currProfit<0)
        {
            currProfit=0;
        }
        if(currProfit>profit2)
        {
            profit2=currProfit;
        }
    }
    
    if(profit1>profit2)
    {
        return maxProfit+profit1;
    }
    else
    {
        return maxProfit+profit2;
    }
    
}


int main()
{
	int arr[2]={2,1};
	std::cout<<maxProfit(arr,2)<<std::endl;

	return 0;
}
