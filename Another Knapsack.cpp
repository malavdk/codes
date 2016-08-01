#include<iostream>
using namespace std;
int main()
{
	int t,i,j,l,k,count=0,cont=1;
	long a[100],b[1000],n,m;
	
		cin>>n;
		cin>>m;
		t=0;
		for(j=0;j<n;j++)
		{
			a[j]=j+1;
			t=t+a[j];
			count++;
		}
		for(j=n-1;j>=0;j--)
		{
			if(t<m)
			{
				cout<<-1;
				break;
			}
			else
			{
				if(m==t)
				{
					cout<<count;
					break;
				}
				else if(m==a[j])
				{
					cout<<a[j];
					break;
				}
				else
					for(k=j-1;k>=1;k--)
					{
						l=a[j]+a[k];
						cont++;
						if(m==l)
						{
							cout<<cont;
							break;
						}
					}
			}
		}
		
		return 0;
}
