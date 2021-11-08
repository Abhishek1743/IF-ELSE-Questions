#include<stdio.h>
int main()
{
	int sp,cp,amt;
	scanf("%d%d",&sp,&cp);
	if(sp>cp)
	{
		amt=sp-cp;
		printf("Profit of %d",amt);
	}
	else if(cp>sp)
	{
		amt=cp-sp;
		printf("Loss of %d",amt);
	}
	else
	{
		printf("No profit or Loss");
	}
	return 0;
}
