#include<iostream>
using namespace std;
int main()
{
	int m,n,t,k,j,i;
	cout<<"enter your limit";
	cin>>t;
	for(k=0;k<t;k++)
	{
	    cout<<"enter the value of m ,n"<<endl;
	    cin>>m>>n;
	    for(i=m;i<n;i++)
	    {
		  for(int j=2;j<i;j++)
          {
            if (i%j==0) 
                break;
            else if (i==j+1)
                cout<<i<<" ";

           }   
	    }
    }
	return 0;
}
