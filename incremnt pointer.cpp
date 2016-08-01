#include<iostream>
using namespace std;
int main()
{
	int *p;
	int a=5,b=7;
	p=&a;
	p++;
	cout<<*p<<endl;
	return 0;
}
