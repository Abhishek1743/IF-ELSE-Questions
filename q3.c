#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a>0)
	{
		printf("Number is positive");
	}
	else if(a<0)
	{
		printf("Number is negative");
	}
	else if(a==0)
	{
		printf("Number is Zero");
	}
	return 0;
}
