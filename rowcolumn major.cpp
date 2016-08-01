#include<iostream>
using namespace std;
int main()
{
	int a[5][3],i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<3;j++)
		{
		cout<<"enter the elements";
		cin>>a[i][j];	
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<3;j++)
		{
		cout<<"enter the elements";
		cin>>a[i][j];	
		}
		cout<<a[i][j]<<endl;
	}
	return 0;
}

