#include<iostream>
using namespace std;
int main()
{
	int t,i,j;
	long a[100],n;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		for(j=0;j<n;j++)
		{
			a[j]=j+1;
		}
		for(j=0;n>0;j++)
		{
			if(n%2==0)
			{
				cout<<a[n/2-1]<<" ";
				n=n-1;
			}
			else
			{
				cout<<a[n/2+j]<<" ";
				n=n-1;
			}
			
		}
		cout<<endl;
	
	}
	return 0;
}
