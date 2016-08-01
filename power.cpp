#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,i,p=1,power;
	printf("enter value of x and y");
	scanf("%d%d",&x,&y);
	/*for(i=1;i<=y;i++)
	p=p*x;
	printf("%d",p);*/
	power=pow (x,y);
	printf("%d",power);
	return 0;
}
