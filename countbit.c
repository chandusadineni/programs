#include<stdio.h>
int main()
{
	int n,c=0;
	printf("enter the number\n");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n&n-1;
		c++;
	}
	printf("no of one's in the number %d\n",c);
}
