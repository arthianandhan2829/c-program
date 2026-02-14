#include<stdio.h>
int main(){
    char ch = 'A';
    int i,j;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("%C",ch);
        }
        printf("\n");
        ch++;
    }
    return 0;
}