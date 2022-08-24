#include<stdio.h>
int selection(int a[],int n)
{
	int i,j,temp,min;
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
			if(i!=min)
			{
				temp=a[min];
				a[min]=a[i];
				a[i]=a[min];
			}
		}
	}
}
int main()
{
	int n;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the array elements:");
	int i;
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	selection(a,n);
	printf("the sorting elements are:");
	int j;
	for(j=0;j<n;j++)
	{
		printf("%d   ",a[j]);
	}
	
}

