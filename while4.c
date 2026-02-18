#include<stdio.h>
int main(){
    int n,i=0;
    int lowbalanceDays = 0;
    int initialBalance;
    scanf("%d",&n);
    scanf("%d",&initialBalance);
    int balance = initialBalance;
    int transaction;
    while(i < n){
         scanf("%d",&transaction);
         balance += transaction;
    if(balance < 2000){
        lowbalanceDays++;
    }     
    i++;
    }
    printf("Final Balance:%d\n",balance);
    printf("Low Balance Days:%d\n",lowbalanceDays);
    return 0;
}
