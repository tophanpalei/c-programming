#include<stdio.h>
int linearsearch(int a[],int n,int x)
{
	int i;
	for(i=0;i<n;i++)
	{
	if(x==a[i])    
	{
		return i;
	}
    }
    	return -1;
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
	int x;
	printf("enter the value which is searched:");
	scanf("%d",&x);
	printf("in place of %d",linearsearch(a,n,x));


   }
