#include<iostream>
using namespace std;
int main()
{
	int i,l,k,j,t;
	cin>>l;
	long a[1000000000],b[1000000000],c[1000000000];
	
	for(t=0;t<l;t++)
	{
		for(i=0;i<3;i++)
		{
			cin>>a[i];
		}
		cout<<endl;
		
		for(i=0;i<a[1];i++)
		{
				cin>>b[i];
		}
		cout<<endl;	
		for(i=0;i<a[0];i++)
		{
				c[i]=i+1;
		}
			
		for(i=0;i<a[0];i++)
		{
			for(j=0;j<a[1];j++)
			{
				if(c[i]==b[j])
				{
					c[i]=c[i+1];
				}
			}	
		}
		
	
	
		if(a[0]-a[1]<a[2])
		{
			cout<<-1<<endl;
		}
		else
		{
			cout<<c[a[2]];
		}
	
	}
	return 0;
	
}
