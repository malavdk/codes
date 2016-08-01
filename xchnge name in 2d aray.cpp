/*
#include<iostream>
using namespace std;
int main()
{
	char name[][10]={
							"akshay",
							"parag",
							"raman",
							"srinivas",
							"gopal",
							"rajesh"
						};
	int i;
	char t;
	
	cout<<"Original:"<<endl<<&name[2][0]<<" "<<&name[3][0];
	
	for(i=0;i<=9;i++)
	{
		t=name[2][i];	
		name[2][i]=name[3][i];
		name[3][i]=t;
	}
	
	cout<<endl<<"New:"<<endl<<&name[2][0]<<" "<<&name[3][0];
	return 0;
}*/

//M-2 usiing pointer
#include<iostream>
using namespace std;
int main()
{
	char *name[]={
							"akshay",
							"parag",
							"raman",
							"srinivas",
							"gopal",
							"rajesh"
				};	
				
	char *tmp;
	cout<<"Original:"<<endl<<name[2]<<" "<<name[3];
	tmp=name[2];
	name[2]=name[3];
	name[3]=tmp;
	cout<<endl<<"New:"<<endl<<name[2]<<" "<<name[3];
	return 0;
}
