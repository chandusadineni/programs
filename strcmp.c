#include<stdio.h>
int strcmp1(char *,char *);
main()
{
	char s1[10],s2[10];
	int res;
	printf("enter two strings\n");
	scanf("%s %s",&s1,&s2);
	res=strcmp1(s1,s2);
	if(res==0)
	printf("strings are equal\n");
	else
	printf("strings are not equal\n");
}
int strcmp1(char *s1,char *s2)
{
	int i,j;
	for(i=0;s1[i];i++)
	{
		if(s1[i]!=s2[i])
		break;
	}
	if(s1[i]==s2[i])
	return 0;
	return 1;
}

