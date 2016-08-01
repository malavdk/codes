#include<iostream>
using namespace std;
int main()
{
  int i,count=0;
  long long n,sum=1;
  cin>>n;
  for(i=1;i<=n;i++)
   {
	sum=sum+sum;
	cout<<sum/2<<"+"<<sum/2<<"="<<sum<<endl;
	count++;
	cout<<count<<" ";	
	 
   }
}
