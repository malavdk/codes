#include<stdio.h>
int main()
{
	struct book
	{
		char name;
		float price;
		int pages;
	};
	struct book b[2];
	int i;
	for(i=0;i<=1;i++)
	{
		printf("enter name,price and pages");
		scanf("%c%f%d",&b[i].name,&b[i].price,&b[i].pages);
	}
	for(i=0;i<=1;i++)
	{
		printf("%c%f%d",b[i].name,b[i].price,b[i].pages);	
	}
	return 0;
}
