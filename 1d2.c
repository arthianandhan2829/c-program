#include<stdio.h>
int main(){
    int N,X;
    scanf("%d",&N);
    scanf("%d",&X);
    int Marks [N];
    for(int i=0;i<N;i++){
        scanf("%d",&Marks[i]);
    }
    int count = 0;
    for(int j=0;j<N;j++){
        if(Marks[j]==X){
            count++;
        }
    }
    printf("%d Frequency count",count);
    return 0;

}