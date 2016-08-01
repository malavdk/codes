//to count even,odd and no. less than 10
#include <iostream>
using namespace std;
int main()
{
	int a[10],i,e=0,o=0,ten=0;
	for(i=0;i<10;i++)
	{
		cout<<"enter the numbers";
		cin>>a[i];
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			e++;
		}
		else
		{
			o++;
		}
		if(a[i]<10)
		{
			ten++;
		}
	}
	cout<<e<<endl;
	cout<<o<<endl;
	cout<<ten;
	return 0;
}
