#include<stdio.h>
#include<conio.h>

int main()
{
	int year;
	
	printf("enter the year no.:");
	scanf("%d",&year);
	
	if(year%4==0&&year%100!=0||year%400==0)
	{
		printf("year is leap");
		
	}
	else
	{
		printf("year is not leap");
		
	}
	getch();
	
}
