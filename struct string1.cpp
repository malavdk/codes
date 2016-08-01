#include<iostream>
using namespace std;
struct student
{
	char name[99];
	char surname[99];
	int roll_no;
	int age;
};
int main()
{
	int N,a;
	cout<<"enter the N";
	struct student a[N];
	int i,j;
	
	for(i=0;i<N;i++)
	{
		cin>>a[i];
		for(j=0;j<N;j++)
		{
		cin>>a[i].name>>a[j].surname>>a[i].roll_no>>a[i].age;	
		}
	}
	j=0;
	while(a[i].name=="")
	{
	if(a[i].name==a[j].surname)
	 {
	  for(i=0;i<N;i++)
	  cout<<a[i].roll_no<<a[i+1].roll_no;
     }
    }
    return 0;
}
