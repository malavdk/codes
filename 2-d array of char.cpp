#include<iostream>
#include<string.h>
using namespace std;
#define FOUND 1
#define NOTFOUND 0

int main()
{
	char masterlist[6][10]={
							"akshay",
							"parag",
							"raman",
							"srinivas",
							"gopal",
							"rajesh"
						   };
	int i,flag,a;
	char yourname[10];
	
	cout<<"enter your name";
	cin>>yourname;
	
	flag=NOTFOUND;
	for(i=0;i<=5;i++)
	{
		a=strcmp(&masterlist[i][0],yourname);
		if(a==0)
		{
			cout<<"you can enter your palace";
			flag=FOUND;
			break;
		}
	}
	if(flag==NOTFOUND)
	cout<<"sorry,you are a trespasser";
	return 0;
}
