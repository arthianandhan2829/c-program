#include<stdio.h>
int main(){
    int capacity,n,change;
    int occupied = 0,criticalcount = 0;
    scanf("%d",&capacity);
    scanf("%d",&n);
    int i = 0;
    while(i < n){
    scanf("%d",& change);
    occupied  +=change;
    if(occupied>0.9*capacity){
        criticalcount++;
    }
    i++;
    }
    printf("Final Occupical Beds:%d\n",occupied);
    printf("Critical Hours:%d\n", criticalcount);
    return 0;
}
