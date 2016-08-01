#include<stdio.h>
#include<math.h>
int dist(int x1,int x2,int z1, int y1, int y2, int z2);
int area(int x1,int y1,int x2,int y2,int x3,int y3);
void pos();
int main ()
{
	int x1,x2,y1,y2,z1,z2,x3,y3,d;
	printf("enter the vertices:");
	scanf("%d%d%d%d%d%d",&x1,&x2,&y1,&y2,&z1,&z2);
	dist(x1,x2,x3,y1,y2,y3);
	printf("distance=%d",d);
	return 0;
}
int dist(int x1,int x2,int z1, int y1, int y2, int z2)
{
	int dis,x3,y3;
	dis=sqrt((x2-x1)*(y2-y1)*(z2-z1));
	return dis;
	area(x1,y1,x2,y2,x3,y3);
}
int area(int x1,int y1,int x2,int y2,int x3,int y3)
{
	int a;
	a=(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y3))/2;
	return a;
}

