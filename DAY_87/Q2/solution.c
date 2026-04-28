// Day 87 - Question 2
// Problem: Koko Eating Bananas

int minEatingSpeed(int* piles, int pilesSize, int H){int i,low=1,high=0,mid,need;for(i=0;i<pilesSize;i++){if(piles[i]>high)high=piles[i];}
while(low<high){mid=(low+high)/2;need=0;for(i=0;i<pilesSize;i++){need+= (piles[i]+mid-1)/mid; if(need>H)break;}
if(need<=H)high=mid;else low=mid+1;}
return low;}
