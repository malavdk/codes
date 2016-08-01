#include<iostream>
using namespace std;
main()
{
	int a[100],b;
	for(b=0;b<10;b++)
	cin>>a[b];
	for(b=0;b<10;b++)
	{
		if(a[b]!=42)
		cout <<a[b]<<endl;
		else
		break;
	}
}
