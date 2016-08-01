/*hcf.c : program to find hcf */
#include <stdio.h>
/* prototypes */
int hcf(int x, int y ); 		

main( ) {
int a, b, result;

printf( "\n enter two numbers: ");
scanf( "%d%d", &a, &b);
	     result = hcf(a, b);
	     printf( "\n The hcf is %d: ", result);
}
/* function to find hcf
    input : two numbers x and y
    output: hcf of x and y*/
int hcf(int x,   int y ){
int  result, smaller;
smaller = ( x< y) ? x : y; 		/* get smaller number */

/* loop to generate numbers from smaller downto 1 */
for (result  = smaller ;  result >= 1;  --result ) {
		if ( ( x% result == 0) && ( y% result == 0) )  /* result divides x & y bath */
			return result;		/* result is the hcf */
} /*for */
}/*function */


