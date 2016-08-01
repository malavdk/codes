#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,max,num;
	printf("enter your limit");
	scanf("%d",&n);
	printf("enter your first no");
	scanf("%d",&num);
	max=num;
	i=1;
	while(i<n)
	{
		printf("enter the next no");
		scanf("%d",&num);
		if(max<num)
		
	    {
	    	max=num;
	    }
	    i++;
	}
	printf("the max no is%d",max);
	getch();
}
