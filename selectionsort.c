#include<stdio.h>
int selectionSort(int a[],int n)
{
	int j,i;
	for(i=0;i<n;i++)
	{
	j=smallest(a,i,n);
	interchange(a,i,j);
	}
		
}
int smallest(int a[],int i,int n)
{
	int min,j;
	min=i;
	for(j=i+1;j<n;j++)
	{
		if(a[j]<a[min])
		{
			min=j;
		}
				
	}
	return min ;
}
int interchange(int a[],int i,int j)
{
	int temp;
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}
int main()
{
	int n;
	printf("enter the size of array:");
	scanf("%d",&n);
	int i;
	int a[n];
	printf("enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	selectionSort(a,n);
	

	int k;
	printf("the sorted array elements is:");
	for(k=0;k<n;k++)
	{
		printf("%d  ",a[k]);
	}
	return 0;
}
	
