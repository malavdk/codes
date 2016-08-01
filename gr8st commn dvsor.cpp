#include<stdio.h>
int main()
{
	int num,rem,den,prod;
	printf("enter the number=\n");
	scanf("%d",&num);
	printf("and divider=\n");
	scanf("%d",&den);
	do
	{
		rem=num%den;
		if(rem==0)
		break;
		num=den;
		den=rem;
    }
		while(true);
		printf("the greatest common divisor is =%d",den);
	
}
