#include<stdio.h>
int main(){
    int n,noise,count = 0;
    int currentStreak = 0,longestStreak = 0;

    scanf("%d",&n);

int i = 0;
while(i < n){
    scanf("%d",&noise);

if(noise > 70){
    count++;
    currentStreak++;
}else{
    if(currentStreak > longestStreak)
       longestStreak = currentStreak;

    currentStreak = 0;
}
i++;
}    
if(currentStreak > longestStreak)
   longestStreak = currentStreak;

printf("Noise Violations:%d\n",count);
printf("Longest Violation Streak:%d\n",longestStreak);

return 0;
}
