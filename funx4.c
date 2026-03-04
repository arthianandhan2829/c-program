#include<stdio.h>
 float areaofcircle(){
    int R;
    scanf("%d",&R);
    float sum = (3.14*R*R);
    printf("%.2f",sum);
 }
int main(){
  areaofcircle();
  return 0;
}