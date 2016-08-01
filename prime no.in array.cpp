#include<stdio.h>
int main()
{
	int num[100],i,n,j,count=0;
	printf("enter the total element");
	scanf("%d",&n);
	printf("enter the array element");
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=2;j<num[i];j++)
		{
			if(num[i]%j==0)
		    count++;
		}
		if(count==0)
		printf("%d",num[i]);
	}
	return 0;
}
