#include<stdio.h>
int main()
{
	int n,i;
	long num,lrgst;
	printf("enter count");
	scanf("%d",&n);
	printf("enter the first no.");
	scanf("%d",&num);
	lrgst=num;
	for(i=0;i<n-1;i++)
	{
		printf("enter the next no.");
		scanf("%d",&num);
		if(num>lrgst)
		lrgst=num;
		printf("\nthe largest no.is:%d",lrgst);
	}
	return 0;
}
