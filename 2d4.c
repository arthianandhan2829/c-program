#include<stdio.h>
int main(){
    int b,c;
    scanf("%d%d",&b,&c);
    int a[50][50];
    for(int i=0;i<b;i++)
    for(int j=0;j<c;j++)
    scanf("%d",&a[i][j]);
    int minlndex = 0;
    float minavg = 999999;
    for(int i=0;i<b;i++){
        int sum = 0;
        for(int j=0;j<c;j++)
        sum += a[i][j];
        float avg = sum/(float)c;
        if(avg<minavg){
            minavg = avg;
            minlndex = i;
        }
    }
    printf("%d",minlndex);
    return 0;
}