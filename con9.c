#include<stdio.h>
int main(){
    int Age;
    scanf("%d",&Age);
if(Age>18){
    printf("Eligible for voting",Age);
}    
else{
    printf("Not eligible for voting",Age);
}
return 0;
}