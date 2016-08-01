#include<iostream>
using namespace std;

class sample
{
	private:
		int data;
		
	public:
	
		sample()
		{
			data=0;
		}
		
		void changedata()
		{
			data=10;
		}
		
		void showdata()const
		{
			cout<<endl<<"data="<<data<<endl;
		}
		
		void add(sample const &a,sample const &b)
		{
			data=a.data+b.data;
		}
		
		void getdata()
		{
			cin>>data;
		}
};

int main ()
{
	sample s1;
	s1.changedata();
	
	sample s2;
	s2.changedata();
	
	sample s3;
	s3.add(s1,s2);
	s3.showdata();
	return 0;
}
