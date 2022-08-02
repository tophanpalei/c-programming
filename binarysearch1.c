#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20];
	int element,n,i;
	printf("enter the size of the array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the array elements in ascending order\t");
		scanf("%d",&a[i]);
	}
	printf("enter the elements\n");
	scanf("%d",&element);
	int low=0,high=n-1,mid,f;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==element)
		{
		    f=1;
			break;	
		}
		if(a[mid]<element)
		{
			low=mid+1;			
		}
	else
	{
		high=mid-1;
	}
	}
	if(f==1)
{
	printf("elemet found in location %d",mid);
}
else
{
	printf("not found");
}
return 0;
}
