#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if((a%4==0) && (a%100==0))
	{
		printf("It is a Leap Year");
	}
	else
	{
		printf("It is not a Leap Year");
	}
	return 0;
}
