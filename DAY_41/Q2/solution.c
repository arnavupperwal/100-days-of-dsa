// Day 41 - Question 2
// Problem: Task Scheduler

int leastInterval(char* tasks,int tasksSize,int n){int cnt[26]={0},i,j,max=0,mc=0,ans;for(i=0;i<tasksSize;i++){cnt[tasks[i]-'A']++;if(cnt[tasks[i]-'A']>max){max=cnt[tasks[i]-'A'];mc=1;}else if(cnt[tasks[i]-'A']==max){mc++;}}ans=(max-1)*(n+1)+mc;return ans>tasksSize?ans:tasksSize;}
