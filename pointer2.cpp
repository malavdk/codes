#include<iostream>
using namespace std;
int main()
{
	int a;
	cout <<&a<<endl;
	a=5;
	int *b;
	b=&a;
	cout <<"address is "<<b<<endl;
	cout<<"value si"<<*b<<endl;
}
