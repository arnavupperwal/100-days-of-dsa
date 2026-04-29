// Day 88 - Question 2
// Problem: Magnetic Force Between Two Balls

int maxDistance(int* position, int positionSize, int k){
    // sort positions
    for(int i=0;i<positionSize;i++) for(int j=i+1;j<positionSize;j++) if(position[i]>position[j]){int t=position[i];position[i]=position[j];position[j]=t;}
    int lo=1, hi=position[positionSize-1]-position[0], ans=0;
    while(lo<=hi){
        int mid=(lo+hi)/2, cnt=1, last=position[0];
        for(int i=1;i<positionSize;i++) if(position[i]-last>=mid){cnt++; last=position[i];}
        if(cnt>=k+1){ans=mid; lo=mid+1;} else hi=mid-1;
    }
    return ans;
}