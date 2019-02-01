#include<stdio.h>
int main()
{
	int x=10,y=20;
	printf("before swap x=%d, y=%d\n",x,y);
	x^=y^=x^=y;
	printf("after swap x= %d, y=%d\n",x,y);
}
