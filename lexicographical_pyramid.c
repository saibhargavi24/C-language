// Prints a pyramid pattern of alphabets, with each row having one more alphabet than the previous row.

#include<stdio.h>
int main()
{
	char ch='A';
	int i,j,n,k;
	printf("enter no.of rows");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
	return 0;
}
