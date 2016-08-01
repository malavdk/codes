#include<iostream>
using namespace std;
int main()
{
	int stud[4][2];
	int i,j;
	
	for(i=0;i<=3;i++)
	{
		for(j=0;j<2;j++)
		{
		cin>>stud[i][j];
		}
	}
   for(i=0;i<=3;i++)
	{
		for(j=0;j<2;j++)
		{
		cout<<stud[i][j];
		}
	}
	return 0;
}
