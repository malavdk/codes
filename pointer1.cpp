#include<iostream>
using namespace std;
int sum(int *a,int *b);
int main()
{
	int a,b;
	a=10;
	b=5;
	cout<<sum(&a,&b)<<endl;
	cout<<a<<endl<<b;
}
int sum(int *a,int *b)
{
	*a=6;
	*b=5;
	return *a+*b;
}
