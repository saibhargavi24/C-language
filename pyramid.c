// Program that prints pyramid

#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter size:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=(2*i-1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
