#include<stdio.h>
int merge(int a[],int mid,int low,int high)
{
	int i,j,k,b[100];
	i=low;
	j=mid+1;
	k=low;
	while(i<=mid&&j<=high)
	{
		if(a[i]<a[j])
		{
		b[k]=a[i];
		i++;
		k++;
    	}
    	else
    	{
    		b[k]=a[j];
    		j++;
			k++;
		}
    }
		while(i<=mid)
		{
			b[k]=a[i];
			i++;
			k++;
		}
	    while(j<=high)
	    {
	    	b[k]=a[j];
	    	j++;
	    	k++;
		int i;
		for(i=low;i<=high;i++)
		{
			a[i]=b[i];
		}
}
int mergesort(int a,int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+mid)/2;
		mergeSort(a,low,mid);
		mergeSort(a,mid+1,high);
		merge(a,mid,low,high);
	}
}
int main()
  {
	int n;
	int a[n];
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the array elements");
	int i;
	for( i=0;i<=n;i++)
	{
		printf("%d",a[i]);
	}
	int low=0,high=n-1;
	mergeSort(a,low,high);
	printf("after merge sorting the array becomes");
	int l;
	for(l=0;l<=n;l++)
	{
		printf("%d",a[l]);
	}
	return 0;
  }
}

      
