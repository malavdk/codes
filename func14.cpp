//*****
#include<stdio.h>
void fun(int*,int*);
int main()
{
	int i=3,j=4;
	fun(&i,&j);
	//l=addmulti(i,j);
	printf("%d\n%d\n",i,j);
	return 0;
}
void fun(int *i,int *j)
{
	*i=*i**i;
	*j=*j**j;
	//return(kk,ll);
}
