#include<iostream>
using namespace std;

class rectangle
{
	private:
		int len,br;
		
	public:
		
		void getdata()
		{
			cout<<endl<<"Enter the length and breath";
			cin>>len>>br;
		}
		
		void setdata(int l,int b)
		{
			len=l;
			br=b;
		}
		
		void displaydata()
		{
			cout<<endl<<"length="<<len;
			cout<<endl<<"breadth"<<br;
		}
		
		void area_peri()
		{
			int a,p;
			a=len*br;
			p=2*(len+br);
			cout<<endl<<"area="<<a;
			cout<<endl<<"perimeter="<<p<<endl;
		}
};
		
		int main()
		{
			rectangle r1,r2,r3;
			
			r1.setdata(10,20);
			r1.displaydata();
			r1.area_peri();
			
			r2.setdata(5,8);
			r2.displaydata();
			r2.area_peri();
			
			r3.getdata();
			r3.displaydata();
			r3.area_peri();
			
			return 0;
		}
