#include<stdio.h>
/* message();
int main()
{
	int a;
	a=message();
	return 0;
}
void meaasge()
{
	printf("viruses are written in c\n");
	return;
}*/
void printit(float,char);
int main()
{
	float a=15.5;
	char ch='C';
	printit(a,ch);
	return 0;
}
void printit(float a,char ch)
{
	printf("%f%c\n",a,ch);
}
