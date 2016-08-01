#include<cctype>
#include<string>
#include<cstdlib>
#include<windows.h>
using namespace std;

void newprintf(int,int,long,char*);
void newprintf(int,int,double,char*);
void newprintf(int,int,char*,char*);
void writechar(char,int,int);
void gotoxy(short,short);

int main()
{
	int i=22,j=22222;
	long int I=777777;
	float f=0.77777f;
	double d=7777.5678;
	static char str[30]="john O Hara! O HARA!";
	
	system("cls");
	newprintf(14,30,(long)i,"9,999");
	newprintf(15,30,(long)j,"9,999");
	newprintf(16,30,I,"99,99.999");
	newprintf(17,30,(double)f,"nn,nnn.nn");
	newprintf(18,30,d,"nn,nn,nnn.nnn");
	newprintf(19,30,str,"!!!!!!!!!!!!!!!!");
	return 0;
}

//long version
void newprintf(int r,int c,long val,char*format)
{
	char*p,str[20];
	int len,i,j,Istr;
	
	len=strlen(format);
	
	_Itoa(val,str,10);
	Istr=strlen(str);
	p=str;
	c+=len;
	p=str+Istr-1;
	format=format+len-1;
	
	for(i=0;i<Istr;i++)
	{
		if(isdigit(*p))
		{
			if(*format==',')
			{
				writechar(',',r,c);
				c--;
				format--;
			}
			writechar(*p,r,c);
			c--;
			format--;
			p--;
		}
	}
}

//double version
 void newprintf(int r,int c,double val,char*format)
 {
 	char*p,str[20];
 	int len,i,j,dec=0;
 	
 	len=strlen(format);
 	c+=len;
 	i=0;
 	j=0;
 	while(*format!='\0')
 	{
 		if (*format==',')
 		dec=1;
 		else
 		{
 			if(*format=='n')
 			{
 				i++;
 				if(dec==1)
 				j++;
			 }
		 }
		 format++;
	 }
	 
	 _gcvt(val,i,str);
	 
	 p=str;
	 Istr=strlen(str);
	 p=str+str-1;
	 
	 for(i=0;i<Istr;i++)
	 {
	 	if(*format==',')
	 	{
	 		writechar(',',r,c);
	 		c--;
	 		format--;
		 }
		 writechar(*p,r,c);
		 c--;
		 format--;
		 p--;
	 }
 }
 
 //sting version
 void newprintf(int r,int c,char *val,char*format)
 {
 	int i,Istr;
 	
 	Istr=strlen(format);
 	
 	for(i=0;i<Istr;i++,format++,val++)
 	{
 		if(*format=='!')
 		*val=toupper(*val);
 		else
 		{
 			if(*format!='x'&&*format!='a')
 			*val=*format;
		 }
		 writechar(*char,r,c+1);
	 }
 }
 
 void writechar(char ch,int r,int c)
 {
 	gotoxy (c,r);
 	putchar(ch);
 }
 void gotoxy(short col,short row)
 {
 	HANDLE h=GetStDHandle(STD_OUTPUT_HANDLE);
 	COORD position ={col,row};
 	SetConsolcCursorPosition(h,position);
 }
