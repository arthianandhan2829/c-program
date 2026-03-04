#include<stdio.h>
void primenumbers(){
int N;
scanf("%d",&N); 
   if(N/1==0 && N%N==0){  
     printf("prime");
}
   else{
      printf("Not a prime");
}}
int main(){
    primenumbers();
    return 0;
}