#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20];
	int n,i,j,k,l,temp;
	printf("enter the size of the array\t");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{ 
		printf("enter array element\t");
		scanf("%d",&a[i]);
	}
	for(j=0;j<n-1;j++)
	{
		for(k=0;k<n-j-1;k++)
		{
			if(a[k]>a[k+1])
			{
				temp=a[k];
				a[k]=a[k+1];
				a[k+1]=temp;
			}
		}
	}
	printf("sorted elements are \n");
	for(l=0;l<n;l++)
	{
		printf("%d\n",a[l]);
	}
	return 0;
} 
