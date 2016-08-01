//recursive program to find to find power  
#include<stdio.h>
int pow(int,int);
int main()
{
	int a,b,power;
	printf("enter a and b ");
	scanf("%d%d",&a,&b);
	power=pow(a,b);
	printf("power : %d on %d is =%d\n",b,a,power);
	return 0;
}
int pow(int x,int y)
{
	int p;
	if(y==1)
	return(x);
	else if (y==0)
	return(1);
	else if(x==0)
	return(0);
	
	else
	p=x*pow(x,y-1);
		return (p);
}
