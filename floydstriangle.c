#include<stdio.h>
int main()
{
	int n,c,r,a=0;
	printf("enter the no of row:");
	scanf("%d",&n);
	for(c=1;c<=n;c++)
	{
		for(r=1;r<=c;r++)
		{
			printf("%5d",a++);
		}
		printf("\n");
	}
	return 0;
}
