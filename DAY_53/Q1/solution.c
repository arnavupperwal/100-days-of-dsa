// Day 53 - Question 1
// Problem: Print Binary Tree Vertical Order

#include <stdio.h>

int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int val[100], l[100], r[100];
    for(int i=0;i<n;i++){int x; scanf("%d",&x); val[i]=x; l[i]=r[i]=-1;}
    // build tree from level order, -1 means NULL
    int q[100], front=0, back=0;
    if(n>0 && val[0]!=-1){q[back++]=0;}
    int idx=1; // next node index in val
    while(front<back && idx<n){
        int cur=q[front++];
        if(idx<n && val[idx]!=-1){l[cur]=idx; q[back++]=idx;} idx++;
        if(idx<n && val[idx]!=-1){r[cur]=idx; q[back++]=idx;} idx++;
    }
    if(n==0 || val[0]==-1){return 0;}
    // BFS to get horizontal distances
    int hd[100];
    int order[100], ordcnt=0;
    int qhd[100];
    front=back=0; q[back++]=0; qhd[back-1]=0;
    while(front<back){
        int cur=q[front]; int h=qhd[front]; front++;
        hd[cur]=h; order[ordcnt++]=cur;
        if(l[cur]!=-1){q[back]=l[cur]; qhd[back]=h-1; back++;}
        if(r[cur]!=-1){q[back]=r[cur]; qhd[back]=h+1; back++;}
    }
    int minh=hd[0], maxh=hd[0];
    for(int i=0;i<ordcnt;i++){if(hd[order[i]]<minh) minh=hd[order[i]]; if(hd[order[i]]>maxh) maxh=hd[order[i]];}
    for(int h=minh; h<=maxh; h++){
        int first=1;
        for(int i=0;i<ordcnt;i++) if(hd[order[i]]==h){
            if(!first) printf(" ");
            printf("%d", val[order[i]]);
            first=0;
        }
        if(h!=maxh) printf("\n");
    }
    return 0;
}
