#include<iostream>
using namespace std;
struct student
{
	char name[100];
	int roll_no;
	int age;
};
int main()
{
	struct student a[3];
	int i;
	for(i=0;i<3;i++)
	{
		cin>>a[i].name>>a[i].roll_no>>a[i].age;
	}
	for(i=0;i<3;i++)
	cout<<a[i].name<<a[i].roll_no<<a[i].age<<endl;
}
