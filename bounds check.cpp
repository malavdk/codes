//passing array elements to function by call by reference
/*#include<stdio.h>
void display(int*);
int main()
{
	int i,marks[]={55,65,75,85,95};
	for(i=0;i<=4;i++)
		display(&marks[i]);
	return 0;
}
void display(int *m)
{
	printf("%d ",*m);
}*/
/*passing array elements to function by call by vallue
#include<stdio.h>
void display(int);
int main()
{
	int i,marks[]={55,65,75,85,95};
	for(i=0;i<=4;i++)
		display(marks[i]);
	return 0;
}
void display(int m)
{
	printf("%d ",m);
}*/
//#include<stdio.h>
/*void disp(int*);
void show(int **);
int main ()
{
	int i;
	int marks[]={55,65,75,85,95};
	for(i=0;i<=4;i++)
	disp(&marks[i]);
return 0;	
}
void disp(int *n)
{
	show (&n);
}
void show(int **m)
{
	printf("%d ",**m);
}*/
/*int main()
{
	int arr[]={10,20,30,40,50};
	int *j,*k;
	
	j=&arr[3];
	k=(arr+3);
	
	if(j==k)
	printf("both pointer point to the same location\n"),printf("%d",&j);
	else
	printf("both pointer do not point to the same location\n"),printf("%d",&k);
	return 0;
}*/
/*int main()
{
	int arr[]={10,20,30,40,50,60,70,80,90};
	int i,*j;
	j=&arr[0];
	
	for(i=0;i<=8;i++)
	{
		printf("Address=%u ",j);
		printf("Element=%d\n",*j);
		j++;
	}
	return 0;
}*/
/*void display(int*,int);
int main()
{
	int arr[]={10,20,30,40,50,60,70,80,90};
	display(arr,9);
	return 0;
}
void display(int*j,int n)
{
	int i;
	for(i=0;i<=n-1;i++)
	{
		printf("element arr[%d]=%d\n",i,*j);
		j++;
	}
}*/
/*#include<stdio.h>
int main ()
{
	int arr[4][2]={
	              {1234,56},
	              {1212,33},
				  {1434,80},
				  {1312,78}
			};
			int i,j;
			for(i=0;i<=3;i++)
			{
				for(j=0;j<=1;j++)
				{
					printf("%d ",*(*(arr+i)+j));
				}
				printf("\n");
			}
			return 0;
}*/
#include<stdio.h>
int main ()
{
	int a[4][2]={
	              {1234,56},
	              {1212,33},
				  {1434,80},
				  {1312,78}
			};
			int (*p)[2];
			int i,j,*pint;
			for(i=0;i<=3;i++)
			{
				p=&a[i];
				pint=(int*)p;
				printf("\n");
				for(j=0;j<=1;j++)
				   printf("%d ",*(pint+j));
			}
			return 0;
}
