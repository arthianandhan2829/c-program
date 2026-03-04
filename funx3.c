#include<stdio.h>
void evenorodd(){
    int N;
    scanf("%d",&N);
    if(N%2==0){
        printf("even");
    }
    else{
        printf("odd");
    }
}
int main(){
    evenorodd();
   return 0;
}