#include<stdio.h>
int maain(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
if(a == b && b == c){
    printf("Equilateral traingle");
}    
else if(a == b|| b == c || c == a){
    printf("Isosceles traingle");
}
else(
    printf("Scalene traingle");
)
return 0;
}