#include<stdio.h>
int main(){
    int b,c;
    scanf("%d%d,&b,&c");
    int a[50][50];
    for(int i=0;i<b;i++)
    for(int j=0;j<c;j++)
    scanf("%d",&a[i][j]);
    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            int current = a[i][j];
            for(int x=i;x<b;x++){
                for(int y=(x==i?j+1:0);y<c;y++){
                    if(a[x][y]==current){
                        printf("%d",current);
                        return 0;
                    }
                }
            }
        }
    }
}