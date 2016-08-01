//program to reverse a array
#include<iostream>
using namespace std;
int main()
{
	int num[10],n,i,j,temp;
	cout<<"enter your limit";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>num[i];
	}
	for(i=0,j=n-1;i<n/2;i++,j--)
	{
		temp=num[i];
		num[i]=num[j];
		num[j]=temp;
	}
	for(i=0;i<n;i++)
	{
		cout<<num[i]<<endl;
	}
	return 0;

}
