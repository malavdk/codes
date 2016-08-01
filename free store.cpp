#include<iostream>
#include<cstdlib>
#include<new>
using namespace std;

void memwarning();

int main()
{
	set_new_handler(memwarning);
	
	char*p=new char[100];
	cout<<endl<<"first allocation:p="<<hex<<long(p);
	p=new char[0x7FFFFFFF];
	set_new_handler(0);//return to default
	return 0;
	
}

void memwarning()
{
	cout<<endl<<"free store has now gone empty"<<endl;
	exit(1);
}
