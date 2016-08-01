#include<stdio.h>
int callmulti(int x,int y,int z);
int main()
{
	int a,b,c,multi;
	printf("value of a,b and c");
	scanf("%d%d%d",&a,&b,&c);
	multi=callmulti(a,b,c);
	printf("the multi is=%d\n",multi);
	return 0;
}
int callmulti(int x,int y,int z)
{
	int d;
	d=x*y*z;
	return(d);
}

