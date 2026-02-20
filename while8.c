#include<stdio.h>
int main(){
    int maxweight,n,weight,total = 0,count = 0;
    scanf("%d",&maxweight);
    scanf("%d",&n);
    int i = 0;
    while(i < n){
        scanf("%d",&weight);
    if(total+weight>maxweight){
       break;    
    }
    total += weight;
    count++;
    i++;
}
   printf("Passengers Allowed: %d\n",count);

if(count < n)
   printf("Overload:Yes");
else
    printf("Overload:No");
    return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              





