#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if((a=='4') || (a=='6') || (a=='9') || (a=='11'))
	{
		printf("30 days");
	}
	else if(a==2)
	{
		printf("28/29 days");
	}
	else
	{
		printf("31 days");
	}
	return 0;
}
