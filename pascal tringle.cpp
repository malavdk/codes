#include<stdio.h>
int main()
{
	int i,j,k,n,r,l,f,p,t,pscl,a,b;
	
	printf("enter the no. of rows=");
	scanf("%d",&n);
		
	
	for(p=0;p<=n;p++)
	{
		for(a=0;a<=n-p;a++)
		{
			printf(" ");
		}
		if(p==0)
		{
			pscl=1;
			printf("%d",pscl);
		}
		
		for(r=0;r<=p;r++)
	 {	
	    f=1;
	  for(i=1;i<=p;i++)
		{
			f=f*i;
		}
		
		l=1;
	  for(j=1;j<=r+1;j++)
		{
			l=l*j;
		}
		
		t=1;
	  for(k=1;k<=(p-r+1);k++)
		{
			t=t*k;
		}
		
		pscl=f/(l*t);
	 }
	 for(a=0;a<=p;a++)
		{
		
			printf("%d ",pscl);
		};
	 printf("\n");
	}
}
