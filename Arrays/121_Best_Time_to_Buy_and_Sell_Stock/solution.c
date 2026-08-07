int maxProfit(int* prices, int pricesSize) {
    int profit=0;
    int temp;
    int min=0;
    for(int i=1;i<pricesSize;i++){
        if(prices[min]>prices[i]){
            min=i;
        }temp=prices[i]-prices[min];
        if(temp>profit){
            profit=temp;
        }
    }return profit; 
}
