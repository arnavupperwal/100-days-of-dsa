// Day 27 - Question 1
// Problem: Find Intersection Point of Two Linked Lists

#include <stdio.h>

int main(){
    int n,m,i,j,k;
    if(scanf("%d",&n)!=1) return 0;
    int a[100],b[100];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&m);
    for(i=0;i<m;i++) scanf("%d",&b[i]);
    int found=0, val;
    for(i=0;i<n && !found;i++){
        for(j=0;j<m;j++){
            if(a[i]==b[j]){
                // check rest of lists are identical from here
                for(k=0;k<n-i && k<m-j;k++){
                    if(a[i+k]!=b[j+k]) break;
                }
                if(k==n-i && k==m-j){
                    found=1; val=a[i];
                }
                break;
            }
        }
    }
    if(found) printf("%d",val); else printf("No Intersection");
    return 0;
}
