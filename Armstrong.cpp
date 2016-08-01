#include<stdio.h>
#include<conio.h>
int main()
{
	int n,num,rem,revno,sum=0;
	printf("enter the no");
	scanf("%d",&n);
	num=n;
	while(n>0)
	{
		rem=n%10;
		revno=rem*rem*rem;
		sum=sum+revno;
		n=n/10;
	}
	if(num=sum)
	{
		printf("no is armstrong no");
	}
	else
	{
		printf("no is not armstrong no");
	}
	getch();
}
