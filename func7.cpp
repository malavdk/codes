#include<stdio.h>
void areaperi(int,float*,float*);
int main()
{
	int rad;
	float area,peri;
	printf("enter the radius:\n");
	scanf("%d",&rad);
	areaperi(rad,&area,&peri);
	printf("area of circle=%f\n",area);
	printf("perimeter of circle=%f\n",peri);
}
void areaperi(int r,float *a,float *b)
{
	*a=3.14*r*r;
	*b=2*3.14*r;
}
