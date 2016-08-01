#include<stdio.h>
#include<conio.h>
int main()
{
	int n,x=2;
	printf("enter the no");
	scanf("%d",&n);
	while(n>=x)
	{
		if(n%x==0)
		{
			printf("%d",x);
			n=n/x;
		}
		else
		{
			x=x+1;
		}
		if(n>=x)
		{
			printf("*");
		}
	}
	getch();
}
