#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int T,m,n,l,i;
	long int x1,y1,x2,y2;
	cout<<"no. of test cases";
	cin>>T;
	for(i=1;i<=T;i++)
	{
		cout<<"enter value ofx1";
		cin>>x1;
		cout<<"enter value of y1";
		cin>>y1;
		cout<<"enter value ofx2";
		cin>>x2;
		cout<<"enter value of y2";
		cin>>y2; 
	m=(x2-x1)*(x2-x1);
	n=(y2-y1)*(y2-y1);
	l=sqrt(m+n);
	cout<<l<<endl;
    }
}
