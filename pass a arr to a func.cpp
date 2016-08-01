//program to pass an array to a function 
#include<stdio.h>
void func (int val[]);
int main()
{
	int arr[]={1,2,3,4,5},i;
	func(arr);
	for(i=0;i<5;i++)
	{
		printf("%d",arr[i]);
		printf("\t");
	}
	printf("\n");
}
void func(int val[])
{
	int sum=0,i;
	for(i=0;i<5;i++)
	{
	val[i]=val[i]*val[i];
	sum=sum+val[i];
    }
    printf("the sum of square =%d\n",sum);
}
