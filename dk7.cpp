#include<stdio.h>
#include<conio.h>

int main()
{
	int call;
	float amt;
	
	printf("enter the call:");
	scanf("%d",&call);
	
	if(call<=150)
	{
		printf("no charge");
		
	}
	else if(call<=400)
	{
		amt==150+(call-150)*0.8;
		printf("%d",&amt);
	}
 	else if(call<=800)
 	{
 		printf("150+(call-400)*1+250*0.8");
 		
 	}
 	else
 	{
 		printf("150+((call-800)*1.2)+(400*1)+(250*0.8)");
 	}
 	getch();
 	
}
