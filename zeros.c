#include<stdio.h>
int main()
{
	int a[]={1,0,1,0,1,0};
	int i,j,k,temp=0,ele;
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
	{
		if(a[i]==0)
		temp++;
	}
	for(i=0;i<temp;i++)
	{
		a[i]=0;
	}
	for(i=temp;i<ele;i++)
	{
		a[i]=1;
	}
	for(i=0;i<ele;i++)
	printf(" %d",a[i]);
}
