#include<iostream>
using namespace std;

class sample
{
	
	private:
		
		static int count;
		
	public:
		
		sample()
		{
			count++;
		}
		static void showcount()
		{
	    	cout<<endl<<"count="<<count;
		}
};
int sample::count=0;

int main()
{
	sample s1;
	//s1.showcount();
	sample::showcount();
	sample s2;
	//s2.showcount();
	sample::showcount();
	sample s3;
	//s3.showcount();
	sample::showcount();
	return 0;
}
