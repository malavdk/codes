#include<iostream>
using namespace std;
int main()
{
	int a[5]={ 4,8,62,9,7};
	int *p,sum=0,i;
	p=&a[0];
	for(i=0;i<5;i++)
	{
		sum=sum+(*p);
		p++;
	}
	cout<<sum<<endl;
}
