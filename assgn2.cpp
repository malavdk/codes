#include<stdio.h>
#include<math.h>
main()
{
	long long int a[6000];
	int i,j,k,l,n,f;
	a[0]=2;
	for(i=3,j=1;j<6000;i++)
	{
		f=0;
		for(k=2;k<=sqrt(i);k++)
		if(i%k==0)
		{
			f=1;
			break;
		}
		if(f==0)
		{
		
		    a[j]=i;
		    j++;
	    }
	}
	printf("how much prime no. you want to enter:\n");
	scanf("%d",&n);
	for(l=0;l<n;l++)
	printf("%d\n",a[l]);
}
