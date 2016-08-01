#include<iostream>
using namespace std;
int main()
{
	int a[16],i,sum1=0,sum2=0,sum;
	
	for(i=0;i<16;i++)
	{
		cin>>a[i];
	}
	
	for(i=0;i<16;i+2)
	{
		a[i]=a[i]*2;
		if(a[i]>=10)
		{
			a[i]=a[i]-9;
		}
		sum1=sum1+a[i];
	}
	
	for(i=1;i<16;i+2)
	{
		sum2=sum2+a[i];
	}
	sum=sum1+sum2;
	if(sum%10==0){
		cout<<"It is a valid CREDIT card";
	}
	else
	cout<<"invalid CREDIT card";
	return 0;
}
