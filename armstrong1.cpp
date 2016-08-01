#include<conio.h>
int main()
{
	int n,num,E=0,O=0;
	printf("enter the limit");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("enter the no");
		scanf("%d",&num);
		if(num%2==0);
		{
			E=E+1;
		}
		else
		{
			O=O+1;
		}
	}
	printf("total even no is:%d",E);
    printf("total odd no is:%d",O);
    getch();
}
