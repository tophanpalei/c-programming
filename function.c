#include<stdio.h>
#include<conio.h>
int tophan(int x,int y)
{

	if (x>y)
	{
		return x;
	}
	else
	{
		return y;
}
}
	int main()
	{
		int a,b;
		printf("enter two no");
		scanf("%d %d",&a,&b);
	
		printf("larger no is %d",tophan(a,b));
		return 0;
	}




