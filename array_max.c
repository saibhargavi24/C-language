// Finds the maximum element in an array.

#include<stdio.h>
int main()
{
    int a[5],i,max;
    printf("Enter the elements:");
    for(i=0;i<=5;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("Max element: %d",max);
    return 0;
}
