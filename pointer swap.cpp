#include<iostream>
using namespace std;
int swap(int *a,int *b);
int main()
{
	int a,b,c;
	a=6;
	b=5;
	swap(&a,&b);
	cout<<a<<endl<<b;
}
int swap(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
	return *a,*b;
}
