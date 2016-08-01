#include<iostream>
using namespace std;

class example
{
	private:
		int data;
	
	public:
	
	example()//constructor (same name as class)	
	{
		cout<<endl<<"inside the instructor";
	}
	
	~example()//destructor (same name with tidle)
	{
		cout<<endl<<"inside the destructor"<<endl;
	}
};

int main()
{
	example e;
	return 0;
}
