#include<iostream>
#include<cstdlib>
using namespace std;
main()
{
	int *p,n,i;
	cout<<"no. of integers to be entered:";
	cin>>n;
	p=(int*)malloc(n*sizeof(int));
	if(p==NULL)
	{
		cout<<"mamory not available";
		//exit(1);
	}
	for(i=0;i<n;i++)
	{
		cout<<"enter an integer";
		cin>>*(p+i);
	}
	for(i=0;i<n;i++)
	cout<<" "<<*(p+i);
	
	
}
