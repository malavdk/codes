#include<iostream>
using namespace std;

class circle
{
	private:
		
		int radius;
		float x,y;
		
	public:
		
		circle()
		{
		}
		
		circle(int rr,float xx, float yy)
		{
			radius=rr;
			x=xx;
			y=yy;
		}
		
		circle& operator=(circle&c)
		{
			cout<<endl<<"assignment operator invoked";
			radius=c.radius;
			x=c.x;
			y=c.y;
			return *this; //circle (radius,x,y);
		}
		
		circle(circle& c)
		{
			cout<<endl<<"copy instructor invoked";
			radius=c.radius;
			x=c.x;
			y=c.y;
		}
		
		void showdata()
		{
			cout<<endl<<"\nRadius="<<radius;
			cout<<endl<<"X-coordinate="<<x;
			cout<<endl<<"Y-coordinate="<<y<<endl;;
		}
};

int main()
{
	circle c1(10,2.5,2.5);
	circle c2,c4;
	c4=c2=c1;//first c2=c1 will execute.   c2.operator(c1)
	circle c3=c1;
	
	c1.showdata();
	c2.showdata();
	c3.showdata();
	c4.showdata();
	return 0;
}
