#include<stdio.h>
void palindromeNumber(){
    int N;
    int original = N;
    rev = 0;
    while(N>0){
        rev = rev*10 + N%10;
        N/=10;
    }
    if(original==rev){
        printf("palindrome");
    }
    else{
        printf("Not a palindrome");
    }
    int main(){
    int N;
    scanf("%d",&N);
     palindromeNumber();
    return 0;
}}