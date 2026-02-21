#include<stdio.h>
int main(){
    int N;
    int count =0;
    scanf("%d",&N);
    int Salesarray[N];
    for(int i=0;i<N;i++){
        scanf("%d",&Salesarray[i]);
    }
    for(int j=0;j<N;j++){
        if(Salesarray[j]<Salesarray[j+1]){
          count++;
        }
    }
        if(count==N){
            printf("Yes");
        }
       else{
        printf("No");
       }
       return 0;
}