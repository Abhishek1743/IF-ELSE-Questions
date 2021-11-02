#include<stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	if((a>='a') && (a<='z'))
	{
		printf("Character is lower case");
	}
	else if ((a>='A') && (a<='Z'))
	{
		printf("Character is upper case");
	}
	else
	{
		printf("Character is not an alphabet");
	}
	return 0;
}
