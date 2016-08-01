#include<stdio.h>
int main()
{
	int n,i,j,num[n],temp;
	
	printf("enter the value of n:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter the element of array:num[%d]=");
		scanf("%d",num[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(num[j]>num[j+1])
			{
				temp=num[j];
				num[j]=num[j+1];
				num[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",num[i]);
	}
	return 0;

}
