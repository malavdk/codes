#include<stdio.h>
int main()
{
	float x,num,den,sum,term,fct;
	int n,i,j;
	printf("enter the value of x and n\n");
	scanf("%f%d",&x,&n);
	x=x*(3.142/180.0);
	sum=0,num=x,den=1;
	for(i=1;i<=n;i++)
	{
		fct=1;
		if(den>1)
		for(j=den;j>1;j--)
		{
			fct=fct*den;
		}
		term=num/fct;
		sum=sum+term;
		num=-num*x*x;
		den=den+2; 
		printf("sum%f",sum);
	}	
	printf("the series of sine=%f",sum);
	return 0;
	
}
