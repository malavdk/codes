//program to find transpose of 2d matrix
#include<iostream>
using namespace std;
int main()

{
	int m,n;
	//input the number of rows and columns
	
	cout<<"Enter the number of rows:"<<endl;
	cin>>m;
	cout<<"Enter the number of columns:"<<endl;
	cin>>n;
	
	//define two matrices
	
    int matrix[m][n],transpose[m][n];
    
    //take the inputs for the matrix
    
    cout<<"Enter the elememts of the matrix:"<<endl;
    for(int i=1;i<=m;i++)
    {
    	for(int j=1;j<=n;j++)
    	{
    		cin>>matrix[i][j];
    	}
    }
    
    //finding the transpose
    
    for(int i=1;i<=m;i++)
    {
    	for(int j=1;j<=n;j++)
    	{
    		transpose[j][i]=matrix[i][j];
    	}
    }
    
    //displaying the transpose
    
     cout<<"The transpose matrix is:"<<endl;
     for(int i=1;i<=n;i++)
    {
    	cout<<endl;
    	for(int j=1;j<=m;j++)
    	{
    		cout<<transpose[i][j]<<" ";
    	}
    }
    
    return 0;
	
}

