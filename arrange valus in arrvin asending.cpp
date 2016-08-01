#include<iostream>
using namespace std;
int main()
{
	int a[10],i,j,temp;
	for(i=0;i<10;i++)
	{
	   cout<<"enter the elements";
	   cin>>a[i];
	}
	for(i=1;i<10;i++)
	{
		for(j=0;j<10-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
    }
    for(i=0;i<10;i++)
    {
    	cout<<a[i]<<endl;
    }
    return 0;
}
