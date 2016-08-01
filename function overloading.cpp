/*#include<iostream>
using namespace std;
int abs(int);
long abs(long);
double abs(double);

int main()
{
	int i=-25,j;
	long l=-100000L,m;
	double d=-12.34,e;
	
	j=abs(i);
	m=abs(l);
	e=abs(d);
	cout<<endl<<j<<endl<<m<<endl<<e<<endl;
	return 0;
}

int abs(int ii)
{
	return(ii>0?ii:ii*-1);
}
long abs(long ii)
{
	return (ii>0?:ii*-1);
}
double abs(double dd)
{
	return (dd>0?:dd*-1);
}
*/
#include<iostream>
using namespace std;
void display(char*);
void display(const char*);

int main ()
{
	char *ch1="Hello";
	const char *ch2="Bye";
	display(ch1);
	display(ch2);
	return 0;
}
void display (char*p)
{
	cout<<p<<endl;
}
void dispaly(const char*p)
{
	cout<<p<<endl;
}	
