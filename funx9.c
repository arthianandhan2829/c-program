#include<stdio.h>
int sum(){
    int N;
    int sum=0;
    for(int i=1;i<=N;i++){
        sum+=i;
    }
    return sum;
}
int main(){
    int N;
    scanf("%d",&N);
    printf("%d",sum);
    return 0;
}