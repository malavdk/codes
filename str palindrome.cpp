#include<iostream>
using namespace std;
int main()
{
	char a[100];
	cin>>a;
	 int i;
	 int l=strlen(a);
	 int flag=0;
	 for(i=0;i<l/2;i++)
	 {
	 	if(a[]==a[l-i-1])
	 	{
	 		flag=1;
	 		break;
	 		
	 	}
	 	if(flag==0)
	 	{
	 		cout<<"palindrome";
	 		
	 	}
	 	else if{
	 		cout<<" not"
		 }
	 	}
	 }
 
     return 0;
}
