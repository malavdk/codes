#include<iostream>
using namespace std;

int main()
{
	int i,j,t,k,flag;
	cin>>t;
	int a[t],b[t];
	
	for(k=0;k<t;k++)
	{
		cin>>a[k]>>b[k];
	}
	
	for(k=0;k<t;k++)
	{
		j=2;
		for(i=a[k];i<=b[k];i++)
 		{
 			if(i>=2)
 			{
      		flag=0;
      			for(j=2;j<=i/2;j++)
      			  {
        			if(i%j==0)
        			{
        				flag=1;
          				break;
        			}
     			   }
      
             if(flag==0)
        	  cout<<endl<<i;
        	 
  			 }
   		 }
			cout<<endl;
 	}
	return 0;	
}
