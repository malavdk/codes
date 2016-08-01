#include<iostream>
using namespace std;
int main()
{
	int n,i,k,j;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1&&j==(n+1)/2)
			cout<<"*";
			else if(i==(n+2)/2&&(j==j+1))
			cout<<"*";
			else if(i==(n+2)/2&&j==j+n-1)
			cout<<"*";
		    //else if((i=(n+1)/2)==(j=(n+1)/2))
			//cout<<"*";
			for(k=(n+1)/2;k<=j+n-1;k++)
			cout<<"*";
		}
	}
}
