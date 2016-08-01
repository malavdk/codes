#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n,m,l;
	cin>>n;
	m=n;
	for(i=0;i<n;i++)
	cout<<"*";
	cout<<endl;
	for(k=1;k<(m-1);k++)
	{
		for(j=1;j<(n-1);j++)
		{
			cout<<" ";
		}
		if(j==(n-1))
			cout<<"*";
			cout<<endl;
		 n=n-1;
	}
	for(l=0;l<m;l++)
	cout<<"*";
	return 0;
}
