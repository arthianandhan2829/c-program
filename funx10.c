#include<stdio.h>
void fibbonaciseries(){
    int a=0,b=1,c;
    for(int i=0;i<n;i++){
        printf("%d",a);
        c = a+b;
        a = b;
        b = c;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    fibbonaciseries();
    return 0;
}