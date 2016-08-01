#include<stdio.h>
void swap (int *x,int *y);
int main()
{
	int a,b;
	printf("Enter the value of a and b:\n");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("the initial value of a:=%d\nthe initial value of b:=%d\n",a,b);
	return 0;
 }
 void swap (int *x,int *y)
 {
 	int tmp;
 	tmp=*x;
 	*x=*y;
 	*y=tmp;
 	printf("the final value of x:=%d\nthe final value of y:=%d\n",*x,*y);
 }
