#include<iostream>
using namespace std;
void concatenate(char [],char []); 
 
int main()
{
   char p[100], q[100];
   
   gets(p);
   gets(q);
 
   concatenate(p, q); 
   cout<<p;
   
   return 0;
}
 
void concatenate(char p[],char q[])
{
   int c, d;
 
   c = 0;
   while (p[c] != '\0')
   {
      c++;  	
   }
 
   d = 0;
   while (q[d]!='\0')
   {
      p[c]=q[d];
      d++;
      c++;	
   }
 
   p[c] = '\0';
}
