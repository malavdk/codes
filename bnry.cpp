#include<stdio.h>
//#include<iostream>
//using namespace std;
int main()
{
	int n,q,bn,count=0;
	scanf("%d",&n);
	printf("=");
	q=n;
	while(q!=0)
	{
		bn=q%2;
		q=q/2;
		printf("%d",bn);
		count++;
	}
	printf("\nWARNING-->>\nBinary Number of %d is the REVERSE ORDER of the Following",n);
	//if(n==1)
	//cout<<1;
}
/*{
    long int decimalNumber,remainder,quotient;
    int binaryNumber[100],i=1,j;
    cout<<"Enter decimal number: ";
    cin>>decimalNumber;
    quotient = decimalNumber;
    while(quotient!=0)
	{
         binaryNumber[i++]= quotient % 2;
         quotient = quotient / 2;
    }
    cout<<"Equivalent binary value of decimal number : ",decimalNumber;
    for(j = i -1 ;j>0;j--)
         cout<<binaryNumber[j];
    return 0;
}*/
	
