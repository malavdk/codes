#include <stdio.h>
#include <conio.h>
float series1( float x, int n );
int main() {
	float x, result; 
	int n;

	
	printf("\n Enter the values of x and n: ");
	scanf("%f%d", &x, &n);
	
	result = series1(x, n);

	printf("\nThe sum is: %f", result);
}

float series1( float x, int n ) {
	float sum, num, den, term;
	int i;

	/* Initalization */
	sum = 0;	 num = x; den = 1;

	/* loop n times to generate terms of series*/
	for ( i = 1; i <= n; ++i)	{
		term = num/den; 	/* calculation current term */
		sum += term; /* add to preview sum */
		num *= x; 	/* numerator for current term*/
		den = den+1; /* denominator for current term*/
	}
	return sum;
}

