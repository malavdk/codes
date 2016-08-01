#include<stdio.h>
int recur(int);
int main()
{
	int a,fact;
	printf("enter any number");
	scanf("%d",&a);
	fact=recur(a);
	printf("factorial  value of %d is =%d\n",a,fact);
	return 0;
}
int recur(int x)
{
	int f;
	if(x==1)
	return(1);
	else
	f=x*recur(x-1);
		return (f);
}
