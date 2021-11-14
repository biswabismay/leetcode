int maxProfit(int* prices, int pricesSize){
    int cost_price=prices[0];
    int max_profit=0;
    int profitnow;
    for(int iLoop=1;iLoop<pricesSize;iLoop++){
        profitnow=prices[iLoop]-cost_price;
        cost_price=(prices[iLoop]<cost_price) ? prices[iLoop] : cost_price;
        max_profit=(profitnow>max_profit) ? profitnow : max_profit;
        
    }
    return max_profit;
}