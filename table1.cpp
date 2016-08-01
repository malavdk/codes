#include<stdio.h>
int main()
{
	int i,table;
	long int n;
	printf("enter the no. which of table you want to print");
	scanf("%d",&n);
	for(i=1;i<11;i++)
	{
		table=i*n;
		printf("%d\n",table);
	}
	return 0;
}
