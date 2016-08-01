#include<iostream>
using namespace std;
//input no.of rows and column and make a 2d array and find sum of its element
int main()
{
	int r,c,i,j,sum=0;
	int a[100][100];
	cin>>r>>c;
	for(i=0;i<r;i++)
	{
	   for(j=0;j<c;j++)
	   {
	   	cin>>a[i][j];
	   }
	}
	for(i=0;i<r;i++)
	{
	   for(j=0;j<c;j++)
	   {
	   	cout<<a[i][j];
	   	sum=sum+a[i][j];
	   }
	   cout<<endl;
	}
	cout<<sum<<endl;
	return 0;
}
