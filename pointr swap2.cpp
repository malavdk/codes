#include<iostream>
using namespace std;
int swap(int *x,int *y);
int main()
{
	int a,b;
	cout<<"enter the two no.";
	cin>>a>>b;
	swap(&a,&b);
	cout<<a<<endl<<b<<endl;
}
int swap(int *x,int *y)
{
	int z;
	z=*x;
	*x=*y;
	*y=z;
}
