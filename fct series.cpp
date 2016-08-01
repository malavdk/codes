#include <iostream>
using namespace std;
int main()
{
	int i,k;
	long int t,count;
	long int a[100000];
	cin>>t;
	for(k=0;k<t;k++)
	{
		cin>>a[k];
	}
	
	for(k=0;k<t;k++)
	{
		count=0;
		for(i=5;a[k]/i>=1;i=i*5)
		{
			count=count+a[k]/i;
		}
	cout<<endl<<count;
	
	}
	return 0;
}
