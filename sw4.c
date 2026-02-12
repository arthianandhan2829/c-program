#include<stdio.h>
int main(){
    int connectionType,units;
    float = 0;
    printf("Enter connectionType:");
        scanf("%d",&connectionType);
    printf("Enter number of units consumed:");    
    scanf("%d",&units);
switch(connectionType){
case 1:
if(units <= 1000){
    bill = units*3;
  } 
else{
    bill = (100*3)+((units - 1000)*5);
  }
  bill -=50;
if(bill<=0)
     bill = 0;
break;
}
case 2:
if(units <= 1000){
    bill = units*7;
}
else{
    bill = (100*7)+ units((units - 100)*10);
}
break;
default:
  printf("Invalid connectiontype\n",);
  return 0;
}  
  