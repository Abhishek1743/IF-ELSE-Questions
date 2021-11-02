#include<stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	if((a>='a') && (a<='z') || (a>='A') && (a<='Z'))
	{
		printf("Character is an alphabet");
	}
	else if ((a>='0') && (a<='9'))
	{
		printf("Character is a digit");
	}
	else
	{
		printf("It is an special character");
	}
	return 0;
}
