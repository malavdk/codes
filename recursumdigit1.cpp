/* Recursive function sum of digit */
#include<conio.h>
#include<stdio.h>
int main()
{
   int sumdigit(int x);
   int n,sum;
 
   printf ("Enter Integer number \n");
   scanf("%d",&n);
   sum=sumdigit(n);
   printf ("Sum of Digit :-> %d\n", sum);
   getch();
}
/* Function sum of digit define as recursive */
int sumdigit(int x)
{
  int s=0,d;
  if(x==0) return (0);
  d= x%10;
  s+=d+sumdigit(x/10);
  return(s);
}
