#include<stdio.h>
int circular(int x,int y,int z);
int main()
{
	int a=5,b=8,c=10;
	circular(a,b,c);
	printf("before shifting, variables isa=%d\nb=%d\nc=%d\n",a,b,c);
	return 0;
}
int circular(int x,int y,int z)
{
	int t;
	t=y;
	y=x;
	x=z;
	z=t;
	printf("x=%d y=%d z=%d",x,y,z);
}
