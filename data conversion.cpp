//conversions:string to int,int to string
#include<iostream>
#include<cstdlib>
#include<string.h>
using namespace std;
class mystring
{
	private:
		
		char str[20];
		public:
			
			mystring()
			{
				str[0]='\0';
			}
			
			mystring(char*s)
		    {
		    	strcpy(str,s);
			}
			
			mystring(int a)
			{
				itoa(a,str,10);
			}
			
			operator int()
			{
				int i=0,l,ss=0,k=1;
				l=strlen(str)-1;
				while(i>=0)
				{
					ss=ss+(str[l]-48)*k;
					l--;
					k=k*10;
				}
				
				return 0;
			}
			
			void displaydata()
			{
				cout<<str;
			}
};

int main()
{
	mystring s1=123;
	cout<<endl<<"s1=";
	s1.displaydata();
	
	s1=150;
	cout<<endl<<"s1=";
	s1.displaydata();
	
	mystring s2("123");
	int i=int(s2);
	cout<<endl<<"i="<<i;
	
	mystring s3("456");
	i=s3;
	cout<<endl<<"i="<<i<<endl;
	return 0;
}
