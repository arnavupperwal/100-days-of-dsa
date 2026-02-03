// Day 3 - Question 2
// Problem: Missing number in array

int missingNumber(int arr[], int n){
    long long sum=0, expected=0;
    for(int i=0;i<n-1;i++) sum+=arr[i];
    for(int i=1;i<=n;i++) expected+=i;
    return (int)(expected-sum);
}