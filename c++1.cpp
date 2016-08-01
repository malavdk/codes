//starting with c++
/*#include<iostream>
using namespace std;

int main()
{
	char str[40];
	int m1,m2,m3,avg;
	
	cout<<"enter your name:";
	cin>>str;
	
	cout<<"enter marks in three subject:";
	cin>>m1>>m2>>m3;
	avg=(m1+m2+m3)/3;
	
	cout<<"your name is"<<str;
	cout<<endl<<"and yoyr avrage marks are"<<avg<<endl;
	return 0;
}*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
	int f;
	
	cin>>f;
	int c=(f-32)*5/9;
	
	cout<<c;
	
	for(int j=10;j<=100;j++)
	cout<<endl<<j<<endl;
	return 0;
}
