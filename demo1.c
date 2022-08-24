#include<stdio.h>
int linearsearch(int a[] ,int n,int x)
{
	int i=0,j=n-1;
	    if(i>=j)
	{
		return -1;
	}
     if (a[i]==x)
	{
		return i;
	}
	else i++;
	
    	if(a[j]==x)
	{
		return j;
	}

	else 	j--;
	linearsearch(a,n,x);
	
int main()
{
	int n;
	printf("enter the size of array:");
	scanf("%d",&n);
	int a[n];
	int i;
	printf("enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	int x;
	printf("enter the element which is a searched:");
	scanf("%d",&x);
	printf("searched element in place of %d",linearsearch(a,n,x));
	
   }
   	return 0;
 }

