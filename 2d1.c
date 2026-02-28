#include<stdio.h>
int main(){
    int b,c;
    scanf("%d%d,&b,&c");
    int a[b][c];
    int i,j;
    for(int i=0;i<b;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int highest = -99999,secondhighest = -99999;
    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            int val = a[i][j];
            if(val>highest){
                secondhighest = highest;
                highest = val;
            }
            else if(val>secondhighest && val!=highest){
                secondhighest = val;
            }
        }
    }
    printf("%d",secondhighest);
    return 0;
}