#include<iostream>
using namespace std;

int scmp(char *,char *);
int main()
{
   char str1[25],str2[25];
   int dif;
   
   cout<<"Enter the first String:";
   gets(str1);
   cout<<"Enter the second String:";
   gets(str2);

   dif=scmp(str1,str2);                                                         //1
   if(dif>0)
       cout<<"comes after"<<str1<<str2;
   else
   {
       if(dif<0)
    cout<<"comes after "<<str2<<str1;
       else
    cout<<"both the strings are same";
   }
}

int scmp(char *s1,char *s2)
{
    if(*s1!='\0'&&*s2!='\0')                                                    // 2     
    {
         while( *s1-*s2==0 && (*s1!='\0' || *s2!='\0'))             // 3
         {
               s1++;
               s2++;
         }
    }
    return(*s1-*s2);                                                                 // 4
}

