//prime factor of a given no.
/*#include<stdio.h>
int main()
{
	int nmbr,div=2;
	printf("enter +ve no.:\n");
	scanf("%d",&nmbr);
	while(nmbr!=0)
	{
		if(nmbr%div!=0)
		{
			div++;
		}
		else
		{
			nmbr=nmbr/div;
			printf("%d\n",div);
			if(nmbr==1)
			break;
		}
	}
	return 0;
}*/
#include<stdio.h>
int primfec(int x);
int main()
{
	int n,p,fector;
	printf("what is your no\n");
	scanf("%d",&n);
	fector=primfec(n);
	printf("prime factor is :%d\n",p);
	return 0;
}
int primfec(int x)
{
	int f,div=2;
	if(x>1)
	{
		if(x%div!=0)
		{
			div++;
		}
		else
		{
			f=primfec(x/div);
		    return f;
		}
	}
	
}
