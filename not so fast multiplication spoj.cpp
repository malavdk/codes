#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i,t,l,k;
    long a[l],b[l],c[l];
    cin>>l;
    
    for(k=0;k<l;k++)
	{
		cin>>a[k]>>b[k];
	}
	
	c[k]=0;
	for(k=0;k<l;k++)
	{
		c[k]=a[k]*b[k];
		cout<<endl<<c[k];
	}
}
