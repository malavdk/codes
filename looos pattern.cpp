#include<stdio.h>
int main()
{
	/*int i,j,n,k=1;//program to print a pattern of no.,to look please run it 
	printf("enter the no. of rows\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		printf("   ");
		
		for(j=1;j<=i;j++){
		printf("%d    ",k);
	    k++;
		}
		
		printf("\n\n");
	}
	return 0;*/
	//program to calculate NCR of a number
	int i,j,k,n,r,l,f,t,ncr;
	
	printf("enter N=");
	scanf("%d",&n);
	
    printf("the NCR of given number %d is=",n);
	for(r=0;r<=n;r++)
	{	
	    f=1;
	for(i=1;i<=n;i++)
		{
			f=f*i;
		}
		//printf("%d\n",f);
		
		l=1;
	for(j=1;j<=r;j++)
		{
			l=l*j;
		}
	//	printf("%d\n",l);
		
		t=1;
	for(k=1;k<=(n-r);k++)
		{
			t=t*k;
		}
		//printf("%d\n",t);
		
		ncr=f/(l*t);
		printf("%d ",ncr);
	}
	return 0;
	
}
