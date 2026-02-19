#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int status[N];
    for(int i=0;i<N;i++){
        scanf("%d",&status[N]);
    }
    int i = 0;
    int currentStreak = 0,LongestStreak = 0;
    while(i<N){
        if(status[i]==0){
            currentStreak++;
        if(currentStreak > LongestStreak){
            LongestStreak = currentStreak;
        }
        else
        {
            currentStreak = 0;
        }
        i++;
    }
    printf("Longest Failure Streak:%d",LongestStreak);
    return 0;
}
}