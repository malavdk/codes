#include<stdio.h>
int factorial(int);
int main()
{
	int a,fact;
	printf("enter any number");
	scanf("%d",&a);
	fact=factorial(a);
	printf("factorial  value of %d is =%d\n",a,fact);
	return 0;
}
int factorial(int x)
{
	int f=1,i;
	for(i=x;i>=1;i--)
		f=f*i;
		return (f);
}
