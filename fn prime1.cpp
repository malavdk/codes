/*prime.c program to check weather a number is prime or not */
#include<stdio.h>
int main() 
  {
	int x, i, flag;

	printf("\nEnter a number: ");
	scanf("%d", &x);
	flag = 1; 		/*initialization status variable */
	
	/* vary i from 2 to x-1 and divide x with each i; only odds can be prime */
	for  ( i = 2; i < x; i += 1) {
		if ( x % i == 0) {/* x is divisible by i  */
			flag =0;	/* reset flog */
			break;		/* terminate loop */
		} /* if */
	}/* for */
	
	if ( flag == 1)
			printf( "\n Number is prime: ");
	else
			printf( "\nNumber is not prime:");
}

