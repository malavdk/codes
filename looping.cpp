#include<stdio.h>
int main()
/*{
	int i,j,k;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			for(k=1;k<=3;k++)
			printf("%d%d%d\n",i,j,k);
		}
	}*/
	{
		int y;
		float i,x;
		for(y=1;y<=6;y++)
		{
		  for(x=5.5;x<=12.5;x++)
		  {
			i=2+(y+0.5*x);
			printf("\n%d\n%f\n%f",y,x,i);
		  }
	    }
	    return 0;
	}

