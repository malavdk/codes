#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n,fl,t,sl,tl,l,index=0;
	cin>>l;
	long a[l],b[100];
	for(t=0;t<l;t++)
	{
		cin>>a[t];
	}
	
	for(i=0;i<l;i++)
	{
		index++;
		
		
		
			if(index<3)
			{
				cout<<-1<<endl;
			}
			else
			for(j=1;j<l-2;j++)
			{
			
			
				
					if(a[i]>a[j])
					{
						fl=a[i];
						sl=a[j];
					}
					else
					{
						fl=a[j];
						sl=a[i];
					}
			
					long t1=fl;
					long t2=sl;
					for(k=2;k<l-3;k++)
					{
					
						if(a[k]<sl)
						{
							tl=a[k];
						}
						else
						{
							if(a[k]>fl)
							{
								fl=a[k];
								sl=t1;
								tl=t2;
							}
							else
							{
								sl=a[k];
								tl=t2;
							}
						}
					}
					
					b[i]=fl*sl*tl;
					
			}
			cout<<b[i]<<endl;
			
			
			
		
	
	}
	
}
