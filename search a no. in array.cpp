#include<iostream>
using namespace std;
int main()
{
	int a[10],i,n,f=0;
	for(i=0;i<10;i++)
	{
		cout<<"enter the elements";
		cin>>a[i];
	}
	cout<<"ente the no. to be found";
	cin>>n;
	for(i=0;i<10;i++)
	{
		if(a[i]==n)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	{
		cout<<i;
	}
	else
	{
		cout<<"not found";
	}
	return 0;
}
