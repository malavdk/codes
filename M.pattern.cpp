#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cin>>n;
	for(i=(n+1)/2;i>=1;i--)
	{
		for(j=i;j>=n;j--)
		{
			cout<<"*";
		}
		cout<<endl;
		
	}
}
