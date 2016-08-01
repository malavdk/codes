#include<stdio.h>
#include<string.h>
main()
{
	int i,n;
	char a[100][20],*p,b[10];
	printf("enter the no of names:\n");
	scanf("%d",&n);
	gets(b);                    /*to consume the empty string after scanf*/
	printf("enter the names one by one:\n");
	for(i=0;i<n;i++)
	{
		gets(&a[i][0]);
	}
	p=&a[0][0];
	for(i=0;i<n;i++)
	if(strcmp(p,&a[i][0])==-1)
	{
		p=&a[i][0];
	}
	printf("the name last in dictionary would be %s",p);
}
