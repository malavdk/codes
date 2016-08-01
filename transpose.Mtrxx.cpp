//program to find transpose of a matrix
#include<iostream>
using namespace std;
int main()
{
    int a[5][5], trans[5][5], r, c, i, j;
    cout<<"Enter rows and column of matrix: ";
    cin>>r,c;

//Storing element of matrix entered by user in array a[][]
    cout<<endl<<"Enter elements of matrix:"<<endl;
    for(i=0;i<r;++i)
    for(j=0;j<c;++j)
    {
        cout<<"Enter elements a:",i+1,j+1;
        cin>>a[i][j];
    }
//Displaying the matrix a[][]
    cout<<endl<<"Entered Matrix:"<<endl;
    for(i=0;i<r;++i)
    for(j=0;j<c;++j)
    {
        cout<<a[i][j];
        if(j==c-1)
            cout<<endl<<endl;
    }

//Finding transpose of matrix a[][] and storing it in array trans[][]
    for(i=0; i<r; ++i)
    for(j=0; j<c; ++j)
    {
       trans[j][i]=a[i][j];
    }

/* Displaying the transpose,i.e, Displaying array trans[][]. */
    cout<<"Transpose of Matrix:"<<endl;
    for(i=0; i<c; ++i)
    for(j=0; j<r; ++j)
    {
        cout<<trans[i][j];
        if(j==r-1)
            cout<<endl<<endl;
    }
    return 0;
}
