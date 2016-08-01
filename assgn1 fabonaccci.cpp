#include<stdio.h>
#include<conio.h>
int main()
{
	int a=1,b=0,c,n,i;
	printf("enter the no. of term");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(i<=1)
		{
		c=i;
		}
		else
		{
			c=a+b;
			b=a;
			a=c;
	    }
	    printf("%d\t",c);
	}
	
	getch ();
}
