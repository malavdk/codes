#include<iostream>
using namespace std;

class index
{
	private:
		int count;
		
	public:
		index()
		{
			count=0;
		}
		
		index(int i)
		{
			count=i;
		}
		
		index operator++()
		{
			++count;
			return index(count);
		}
		
		void showdata()
		{
			cout<<count;
		}
};

int main()
{
	index c,d;
	cout<<endl<<"c=";
	c.showdata();
	
	++c;
	//c.operator++();
	cout<<endl<<"c=";
	c.showdata();
	
	d=++c;
	//c.operator+();
	cout<<endl<<"c=";
	c.showdata();
	cout<<endl<<"d=";
	d.showdata();
	return 0;
}
