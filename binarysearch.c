#include<stdio.h>
int binarysearch(int a[],int x,int n)
{
	int mid,high=n,last=0,i;
	for(i=0;i<n;i++)
	{
		mid=(last+high)/2;
		if(x>a[mid])
		{
			last=mid+1;
		}
		else if(x<a[mid])
		{
			last=mid-1;
    	}
    	else {
    		return mid;
		}
		return 0;
	}
	int main()
	{
		int n;
		printf("enter the size of array\n");
		scanf("%d",&n);
		int a[n],j;
		printf("enter the array elements\n");
		for(j=0;j<n;j++)
		{
		
			printf("%d",a[j]);
	}
	int x;
	printf("enter the no which be searched \n");
	scanf("%d",&x);
		binarysearch(a,x,n);
		printf("in place %d",mid);
		
	}
}
