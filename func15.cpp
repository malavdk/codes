#include<stdio.h>
//void predigit(char a,char b);
//void postdigit(char c,int n);
int main()
{
	int n;
	printf("enter your year No.\n");
	scanf("%d",&n);
  if(n<=0)
  printf("number  is invalid\n");
  while(n!=0)
  {
  	if(n>=1000)
  	{
  		printf("M");
  		n=n-(n/1000)*1000;
  	}
  	else if(n>=500)
  	{
  		if(n<500+100*4)
  		{
  		  printf("D");
  		  n=n-(n/500)*500;
  	    }
  	    else
  	    {
  	    	printf("C");
  	    	n=n-(1000-100);
  	    }
  	}
  	else if(n>=100)
  	{
  		if(n<100+3*100)
  		{
  			printf("C");
  			n=n-(n/100)*100;
  		}
  		else
  		{
  			printf("L");
  			n=n-(500-100);
  		}
  	}
  	else if(n>=50)
  	{
	    if(n>50+4*10)
	    {
	    	printf("L");
	    	n=n-(n/50)*50;
	    }
	    else
	    {
	    	printf("X");
	    	n=n-(50-10);
	    }
  	}
  	else if(n>=10)
  	{
  		if(n>10+3*10)
  	    {
  	    	printf("X");
  	    	n=n-(n/10)*10;
  	    }
  	    else
  	    {
  	    	printf("V");
  	    	n=n-(10-1);
  	    }
  		
  	}
  	else if(n>=5)
  	{
  		if(n>5+4*1)
  		{
  			printf("V");
  			n=n-(n/5)*5;
  		}
  		else
  		{
  			printf("I");
  			n=n-(5-1);
  		}
  	}
  }
  return 0;
}
