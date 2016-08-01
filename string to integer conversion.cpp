// C++ program to convert string to integer without using atoi function
#include<iostream>
using namespace std;
 
int toString(char []);
 
int main()
{
  char a[100];
  int n;
 
  cout<<"Input a valid string to convert to integer"<<endl;
  cin>>a;
 
  n=toString(a);
 
  cout<<"String="<<a<<endl<<"Integer="<<n;
 
  return 0;
}
 
int toString(char a[])
{
  int c,sign,offset,n;
 
  if (a[0]=='-') // for negative integer
  { 
    sign=-1;
  }
 
  if (sign==-1)
  {  // Set starting position to convert
    offset=1;
  }
  else {
    offset=0;
  }
 
  n=0;
 
  for(c=offset;a[c]!='\0';c++)
  {
    n=n*10+a[c]-'0';
  }
 
  if(sign==-1)
  {
    n=-n;
  }
 
  return n;
}
