#include<iostream>
using namespace std;
int main()
//to find submatrix of a matrix
{
	int i,j,r,c,x,y,k,l;
	cin>>r>>c;
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	cin>>x>>y;
	cin>>k>>l;
	for(i=x;i<=k;i++)
	{
		for(j=y;j<=l;j++)
		cout<<a[x][y];
	}
	return 0;
}
