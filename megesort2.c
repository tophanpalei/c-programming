 #include<stdio.h>
void printArray(int *a,int n)
{
	int i;
	printf("enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
}
void merge(int a[],int mid,int low,int high)
{
	int i,j,k,b[100];
	i=low;
	j=mid+1;
	k=low;
	while(i<=mid && j<=high)
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
		}
		
		for(i=low;i<=high;i++)
		{
			a[i]=b[i];
		}
}

	void mergeSort(int a[],int low,int high)
	{
		int mid;
		if(low<high)
		{
			mid=(low+high)/2;
			mergeSort(a,low,mid);
			mergeSort(a,mid+1,high);
			merge(a,mid,low,high);
		}
	}
	int main()
	{
		int n;
		printf("enter the array size \n");
		scanf("%d",&n);
		int a[n];
		printArray(a,n);
		mergeSort(a,0,n-1);
		int j;
		for(j=0;j<n;j++)
		{
			printf("%d   ",a[j]);
		}
		return 0;
	}

