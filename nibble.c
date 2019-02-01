#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the number\n");
	scanf("%d",&n);
	printf("before\n");
	for(i=7;i>=0;i--)
	{
		printf("%d",n>>i&1);
	}
	printf("\nafter\n");
	n=((n&0x0F)<<4)|((n&0XF0)>>4);
	for(i=7;i>=0;i--)
	{
		printf("%d",n>>i&1);
	}
}

