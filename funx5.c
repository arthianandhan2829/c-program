#include<stdio.h>
 void sumofdigits(){
    int N;
    int sum  = 0;
    int rem=0;
   while(N>0){
    rem=N%10;
    sum = sum + rem;
    N = N/10;
   }
   printf("%d",sum);
 }
int main(){
    sumofdigits();
    return 0;
}