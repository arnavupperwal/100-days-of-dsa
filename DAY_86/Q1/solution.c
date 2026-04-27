// Day 86 - Question 1
// Problem: Square Root using Binary Search

#include <stdio.h>
int main(){
    long long n; if(scanf("%lld",&n)!=1) return 0; // read input
    long long low=0, high=n, ans=0;
    while(low<=high){
        long long mid=(low+high)/2; // mid value
        long long sq=mid*mid; // square of mid
        if(sq==n){ ans=mid; break; }
        if(sq<n){ ans=mid; low=mid+1; }
        else high=mid-1;
    }
    printf("%lld",ans); // output integer sqrt
    return 0;
}
