#include<iostream>
using namespace std;

class employee
{
	private:
		char name[20];
		int age;
		
	public:
		employee();
		employee(char*n,int a);
		void getdata();
		void showdata();
};

employee::employee()
{
	strcpy(name,"");
	age=0;
}
employee::employee(char*n,int a)
{
	strcpy(name,n);
	age=a;
}
void employee::getdata()
{
	cout<<endl<<"enter name and age"<<endl;
	cin>>name>>age;
}

void employee::employee()
{
	cout<<"name="<<name<<endl;
	cout<<"age="<<age<<endl;
}

int main()
{
	employee e1("sanjay ",34);
	e1.showdata();
	employee e2;
	e2.getdata();
	e2.showdata();
	return 0;
}
