#include<stdio.h>
int rseries(int n);
int main()
{
	int x,sumseries;
	printf("enter the nuber");
	scanf("%d",&x);
	sumseries=rseries(x);
	printf("the sum of series=%d",sumseries);
	return 0;
}
int rseries(int n)
{
	int sum;
	if(n==0)
	return 0;
	else
	{
		sum=n+rseries(n-1);
	    printf("%d + ",n);
    }
    return(sum);
}
