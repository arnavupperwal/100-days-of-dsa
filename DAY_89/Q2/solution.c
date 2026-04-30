// Day 89 - Question 2
// Problem: Capacity To Ship Packages Within D Days

int shipWithinDays(int* w,int n,int D){int lo=0,hi=0;for(int i=0;i<n;i++){if(w[i]>lo)lo=w[i];hi+=w[i];}while(lo<hi){int mid=lo+(hi-lo)/2;int days=1,sum=0;for(int i=0;i<n;i++){if(sum+w[i]>mid){days++;sum=0;}sum+=w[i];}if(days<=D)hi=mid;else lo=mid+1;}return lo;}
