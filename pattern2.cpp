#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"enter the limit";
	cin>>n;
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(j=i;j>=1;j--)
		{
		cout<<j;
	    }
	    cout<<endl;
	}
}
