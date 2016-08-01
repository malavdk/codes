#include<stdio.h>
main()
{
	int i,lrgst,hf,n,a[100],b[500]={};
	printf("Enter the array size:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[a[i]]+=1;
	}
	lrgst=b[0];
	for(i=1;i<500;i++)
	{
	    if(b[i]>lrgst)
	    {
	    	lrgst=b[i];
	    	hf=i;
	    }
		
	}
	printf("\n the no. having most frequ:%d\t",hf);
	for(i=0;i<500;i++)
	{
		if(b[i]==lrgst&&i!=hf)
		printf("and %d",i);
	}
}
