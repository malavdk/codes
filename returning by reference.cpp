#include<iostream>
using namespace std;
struct emp
{
	char name[20];
	int age;
	float salary;
};
emp e1={"anmol",21,1542.00};
emp e2={"ajay",23,7463.00};

emp &fun();

int main ()
{
	fun()=e2;
	cout<<endl<<e1.name<<endl<<e1.age<<endl<<e1.salary<<endl;
	return 0;
}

emp &fun()
{
	cout<<endl<<e1.name<<endl<<e1.age<<endl<<e1.salary;
	return e1;
}
