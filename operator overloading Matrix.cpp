#include<iostream>
#include<iomanip>
using namespace std;

const int MAXROW=3,MAXCOL=3;
struct matrix
{
	int arr[MAXROW][MAXCOL];
};

matrix operator+(matrix a,matrix b);
matrix operator-(matrix a,matrix b);
matrix operator*(matrix a,matrix b);
void mat_print(matrix p);

int main()
{
	matrix a={
	          1,2,3,
	          4,5,6,
	          7,8,9
	        };
	        
	matrix b={
	         1,2,3,
	         4,5,6,
             7,8,9
	         };
	 matrix c,d,e,f;
	 
	 c=a+b;
	 d=a*b;
	 e=a+b*c;
	 f=a-b*c+d;
	 mat_print(c);
	 mat_print(d);
	 mat_print(e);
	 mat_print(f);
	 return 0;
}
matrix operator+(matrix a,matrix b)
{
	matrix c;
	int i,j;
	
	for(i=0;i<MAXROW;i++)
	{
		for(j=0;j<MAXCOL;j++)
		c.arr[i][j]=a.arr[i][j]+b.arr[i][j];
	}
		return c;
}

matrix operator-(matrix a,matrix b)
{
	matrix c;
	int i,j;
	
	for(i=0;i<MAXROW;i++)
	{
		for(j=0;j<MAXCOL;j++)
		c.arr[i][j]=a.arr[i][j]-b.arr[i][j];
	}
		return c;
}

matrix operator*(matrix a,matrix b)
{
	matrix c;
	int i,j,k;
	
	for(i=0;i<MAXROW;i++)
	{
		for(j=0;j<MAXCOL;j++)
		{
			c.arr[i][j]=0;
			for(k=0;k<MAXCOL;k++)
		c.arr[i][j]+=a.arr[i][k]*b.arr[k][j];
	    }
	}
	return c;
}

void mat_print(matrix p)
{
	int i,j;
  	 cout<<endl<<endl;
  	 for(i=0;i<MAXROW;i++)
  	 {
  	 	cout<<endl;
  	 	for(j=0;j<MAXCOL;j++)
  	 	cout<<setw(5)<<p.arr[i][j];
	   }
}
