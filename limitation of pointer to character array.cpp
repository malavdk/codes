/*#include<iostream>
using namespace std;
int main ()
{
	char *names[6];
	int i;
	for(i=0;i<=5;i++)
	{
		cout<<"enter name:";
		cin>>names[i];
	}
	return 0;
}/*this program dosnt work,when we declaring array.it contrains garbage value.and it would be definitely wrong to send these values to cin*/

//solution:
#include<iostream>
#include<cstdlib>
#include<string.h>
using namespace std;
int main()
{
	char *names[6];
	char n[50];
	int len,i;
	char *p;
	for(i=0;i<=5;i++)
	{
		cout<<"enter name"<<" ";
		cin>>n;
		len=strlen(n);
		p=(char*)malloc(len+1); /* +1 for accomodating \0*/
		strcpy(p,n);
		names[i]=p;
	}
	for(i=0;i<=5;i++)
	{
		cout<<endl<<names[i];
	}
		return 0;
}
