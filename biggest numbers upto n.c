#include<stdio.h>
int main()
{
	int i,n,max=0;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i>max)
		max=1;
	}
	printf("largest number up to %d is %d",n,max);
	return 0;
}