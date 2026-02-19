#include<stdio.h>
int main(){
    int N,order;
    int successful = 0,Cancelled = 0;
    int i = 0;
    scanf("%d",&N);
    while(i<N){
        scanf("%d",&order);
    if(order -=1)
       successful ++;
    else if(order == 0)
        Cancelled ++;
    i++;       
    }
    printf("Successful:%d\n",successful);
    printf("Cancelled:%d\n",Cancelled);
    if(Cancelled > successful)
       printf("Status:Safe");
    else
       printf("Status:Risk");
return 0;
}