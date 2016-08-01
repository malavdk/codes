#include<stdio.h>
main()
{
	char i=0,a[20],b[20];
	printf("Enter the first name:\n");
	scanf("%s",a);
	printf("enter the second name:\n");
	scanf("%s",b);
	while(a[i]==b[i])
	i++;
	if(a[i]>b[i])
	printf("%s",b);
	else
	printf("%s",a);
}

