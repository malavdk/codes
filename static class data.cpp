#include<iostream>
using namespace std;

class sample
{
	private:
		static int index;//declaration of index
		int count;
		
	public:
		
		sample()
		{
			index++;
			count++;
		}
		
		void showdata()
		{
			cout<<endl<<"index="<<index;
			cout<<endl<<"count="<<count;
		}
};

int sample::index=0;//definition of index

int main()
{
	sample s1,s2,s3;
	
	s1.showdata();
	s2.showdata();
	s3.showdata();
	return 0;
}
