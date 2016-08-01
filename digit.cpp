#include<iostream>
using namespace std;
int main()
{
	double dk,i,digit,rem,count=0,dkm,t,j,pk,n,m,sub;
	cin>>n;
	m=n;
	while(n>0)
	{
		rem=n%10;
		digit=rem;
		n=n/10;
		cout<<" "<<digit;
		count++;
	}
	cout<<endl;
	cout<<count<<endl;
	t=count-1;
	cout<<t<<endl;
for(i=1;i<=count;i++)
	{
		for(j=1;t<t;j++)
		{
			pk=1;
			pk=(pk*10);
		} 
		  dk=(double)m/pk;
	      dkm=int(dk);
	      sub=dk-dkm;
	      m=sub*pk;
	      cout<<" "<<dkm<<" ";  
    }
	
}

