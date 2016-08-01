#include<stdio.h>
#include<math.h>
int artringle(float a,float b,float c);
int main()
{
	float x,y,z,area;
	printf("Enter the side of tirngle:");
	scanf("%f%f%f",&x,&y,&z);
	artringle(x,y,z);
	printf("the area of tringle is:%f\n",area);
	return 0;
}
int artringle(float a,float b,float c)
{
   float S,A;
   S=(a+b+c)/2;
   A=sqrt(S*(S-a)*(S-b)*(S-c));
   //return (A);
   printf("%f=",A);
}
