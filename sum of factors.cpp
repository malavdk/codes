#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i,t,l,k;
    cin>>l;
    long a[l];
    for(k=0;k<l;k++)
	{
		cin>>a[k];
	}
	for(k=0;k<l;k++)
	{
       long sum=0;
       int t=sqrt(a[k]);
    	for (i=1;i<t+1;i++)
		{
        	if(a[k]%i==0)
			{
            	sum=sum+i;
            	sum=sum+a[k]/i;
        	}
    	}
    	if(t*t==a[k])
    	sum=sum-t;
    	
    	cout<<endl<<sum;
    }
    return 0;
}
