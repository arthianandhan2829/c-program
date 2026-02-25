#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);

    int a[N];

    for(int i=0;i<N;i++)
        scanf("%d",&a[i]);

    int j = 0;   // position for next non-zero

    // move non-zero forward
    for(int i=0;i<N;i++)
    {
        if(a[i] != 0)
        {
            a[j] = a[i];
            j++;
        }
    }

    // fill remaining with zeros
    while(j < N)
    {
        a[j] = 0;
        j++;
    }

    // print array
    for(int i=0;i<N;i++)
        printf("%d ",a[i]);

    return 0;
}