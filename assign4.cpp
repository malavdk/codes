#include<stdio.h>
void max(int*p,int x);
main()
{
	int a[100],arr[5000]={},n,lrgst,i,mode,hf,sum=0,sum1=0,count=0;
	float median,mean;
	printf("enter the size of the data:\n");
	scanf("%d",&n);
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	arr[a[i]]++;
    for(i=0;i<n;i++)
	{
		sum+=a[i];
		count++;
	}
	mean=(float)sum/count;
	printf("the mean is:%f\n",mean);
	lrgst=arr[0];
	for(i=1;i<500;i++)
	{
	    if(arr[i]>lrgst)
	    {
	    	lrgst=arr[i];
	    	hf=i;
	    }
		
	}
	printf("\nthe most frequently occuring element is :%d\t",hf);
	for(i=0;i<n-1;i++)
	max(a+i,n-i);
	if(n%2==0)
	median=(float)(a[n/2]+a[n/2-1])/2;
	else
	median=(float)a[n/2];
	printf("\nmedian is %f",median);
}
void max(int*p,int x)
{
	int maxm=*p,i;
	for(i=0;i<x;i++)
	{
		if(*(p+i)>*p)
		{
			maxm=*(p+i);
			*(p+i)=*p;
			*p=maxm;
		}
	}
}
