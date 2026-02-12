#include<stdio.h>
int main(){
    int accounttype,balance,withdrawAmount;
    scanf("%d",&accounttype);
    scanf("%d",&balance);
    scanf("%d",&withdrawAmount);
switch(accounttype){
case 1:
if(balance >= withdrawAmount){
    printf("Transaction Successfull");
}
else{
    printf("Insufficient Balance");
}
break;
case 2:
    if(withdrawAmount<= 5000){
    printf("Limited Excessed");
}
else if(balance >= withdrawAmount){
    printf("Transaction  Succesfull");
}
break;

default:
   printf("Invalid Accounttype");
}
return 0;
}