#include<stdio.h>
int main()
{
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	if((x==y) && (x==z))
	{
		printf("It is an Equilateral Triangle");
	}
	else if((x==y) || (x==z) || (y==z))
	{
		printf("It is an Isosceles triangle");
	}
	else
	{
		printf("It is an Scalene triangle");
	}
	return 0;
}
