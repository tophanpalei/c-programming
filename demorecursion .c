#include<stdio.h>
void f(int count)
{
	if(count==3)
	{
   return;	
	}
    else
{
	printf("%d",count);
	f(count);
}
int main()
{
	int count=0;
      f(count);
   }

