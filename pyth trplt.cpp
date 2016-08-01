#include<iostream>
using namespace std;
int main() 
{
  long a,b,c;
   for(a=1;a<=19250;a++)
    { 
	 for(b=1;b<=19250;b++)
	  { 
	   for(c=1;c<=19250;c++)
	    { 
		 if(((a*a)+(b*b)==(c*c)))
		  { 
		  cout<<a<<"       "<<b<<" "<<"*******"<<"           "<<c<<"  "<<"!@#$%^&*"<<endl;
		  }
	    }
	  }
    }
   return 0;
}
