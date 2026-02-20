#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    int i = 0;
    int currentStreak = 0,maxStreak = 0;
    while(i<n){
        if(arr[i]==0){
            currentStreak++;
        }
        else{
            if(currentStreak > maxStreak){
                maxStreak = currentStreak;
            }
            currentStreak = 0;
        }
        i++;
    }
    if(currentStreak > maxStreak){
        maxStreak = currentStreak;
    }
    printf("Longest Default Streak:%d",maxStreak);
    return 0;
}