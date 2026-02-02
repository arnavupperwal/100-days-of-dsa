// Day 2 - Question 2
// Problem: Best Time to Buy and Sell Stock

int maxProfit(int* prices, int n){int maxp=0,i,j;for(i=0;i<n;i++)for(j=i+1;j<n;j++)if(prices[j]-prices[i]>maxp)maxp=prices[j]-prices[i];return maxp;}
