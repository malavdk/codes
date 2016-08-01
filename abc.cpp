#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	char ch='A';
	printf("enter the limit");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\t%c\n",ch);
		ch++;
	}
	getch ();
}
