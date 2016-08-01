#include<iostream>
using namespace std;

int main()
{
	int t,i,j,div;
	long n;
	
	cout<<endl<<"print the no. of taste cases"<<t;
	cin>>t;
	div=0;
	
	for(j=0;j<t;j++)
	{
		cout<<endl<<"print  the no.";
		cin>>n;
		
		for(i=1;i<n;i++)
		{
			if(n%i==0)
			{
				div=div+i;
				
			}	
		}
			cout<<endl<<"sum of divisor="<<div<<endl;
			div=0;
	}
	return 0;
}
