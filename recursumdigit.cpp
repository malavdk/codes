#include<stdio.h>
int recursumdigit(int x);
int main()
{
	int n,s;
	printf("enter the no.\n");
	scanf("%d",&n);
	s=recursumdigit(n);
    printf("sum of digit=%d\n",s);
	return 0;
}
int recursumdigit(int x)
{
	int r,sumd=0;
    if(x==0)
	 return (0);
    
    	r=x%10;
    	sumd=sumd+r+recursumdigit(x/10);
    
	return sumd;
	//printf("%d",sumd);
}
