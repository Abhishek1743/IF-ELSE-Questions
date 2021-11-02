#include<stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	if((a>='a') && (a<='z') || (a>='A') && (a<='Z'))
	{
		printf("Character is an alphabet");
	}
	else
	{
		printf("Character is not an aplhabet");
	}
	return 0;
}
