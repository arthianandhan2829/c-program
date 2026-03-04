#include<stdio.h>
void reversenumber(){
    int N;
    int rev=0;
    while(N>0){
    rev = rev*10+(N%10);
        N = N/10;
    }
        return rev;
    }
    int main(){
        int num;
        scanf("%d",&num);
        int result=(num);
        printf("%d",result);
        return 0;
    }