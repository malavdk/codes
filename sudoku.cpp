#include<iostream>
using namespace std;
int main()
{
	int sudoku[9][9];
	int i,j,k;
	cout<<"enter the element 1 to 3 in sudoku";
	
    for(i=0;i<9;i++)
    {
    	for(j=0;j<9;j++)
    	{
    		cin>>sudoku[i][j];
    	}
    }
   for(i=0;i<9;i++)
    {
    	for(j=0;j<9;j++)
    	{
    		cout<<sudoku[i][j];
    	}
    	cout<<endl;
    }
    for(i=0;)
}
