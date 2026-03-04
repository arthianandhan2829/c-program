#include<stdio.h>
float calculateIntrest(){
    int P,R,T;
    scanf("%d %d %d",&P,&R,&T);
    float sum=((P*R*T)/100);
    printf("%d",sum);
}
int main(){
    calculateIntrest();
    return 0;
}
