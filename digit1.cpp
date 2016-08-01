#include<iostream>
using namespace std;
int main()
{
	int a[100],n,i,digit;
	cout<<"value of n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		digit=a[i]%10;
		a[i]=a[i]/10;
	}
	for(i=0;i<n;i++)
	{
		cout<<digit;
	}
}
