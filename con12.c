#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
if(a<=100){
   if(a>=90){
    printf("Grade A+");
   }}    
else if(a<=80 && a>=90){
    printf("Grade A");
}   
else if(a<=60 && a>=70){
    printf("Grade B");
}
else if(a<50){
    printf("Fail");
}
return 0;
}