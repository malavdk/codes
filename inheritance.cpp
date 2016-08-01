#include<iostream>
using namespace std;
class index //base class
{
	protected:
		
		int count;
		
		public:
			
			index()//zero argument constructor
			{
				count=0;
			}
			
			index(int c)//one argument constructor
			{
				count++;
			}
			
			void display()
			{
				cout<<endl<<"count="<<count<<endl;
			}
			
			void operator++()
			{
				count++;
			}
};

class index1:public index //derived class
{
	public:
		
		void operator--()
		{
			count--;
		}
};

int main()
{
	index1 i;
	++i;
	++i;
	i.display();
	--i;
	i.display();
	return 0;
}
