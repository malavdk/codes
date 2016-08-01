#include<stdio.h>
#include<string.h>
 
int main() 
   char str[100],str1[100],temp;
   int i, j = 0;
 
   printf("\nEnter the string :");
   gets(str);
 
   i = 0;
   j = strlen(str) - 1;
   for(i=0;i<j;i++)
   {
   	str1[i]=str[i];
   }
   while (i < j) {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i++;
      j--;
   }
   if(str1==str)
   {
   	 printf("yes");
   }
   else
   {
   	printf("no");
   }

   return (0);
}
