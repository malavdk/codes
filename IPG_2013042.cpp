//assignment-3
// DINESH KUMAR MALAV
//IPG-2013042
#include<iostream>
#include<conio.h>
#include<time.h>
using namespace std;
void tower_of_Hanoi(int,char frompeg,char topeg,char intermediatepeg);
long long count=0;
int main()
{
	int H;
	char I,J,K;
	cout<<"enter,how many pegs you want to transfer:"<<endl;
	cin>>H;
	cout<<"Enter the starting,destination and intermediate pegs name: "<<endl;
	cin>>I>>J>>K;
	clock_t start;
	start=clock();
	tower_of_Hanoi(H,'I','K','J');
	clock_t end;
	end=clock();
	cout<<"Time Taken by moves:=";
	cout<<((double)(end-start)/CLOCKS_PER_SEC);
    cout<<"secs"<<endl;
    cout<<"no of moves  are:"<<count;
    
	
}
void tower_of_Hanoi(int H,char frompeg,char topeg,char intermediatepeg)
{
	if (H==1)
	{
		count++;
	}
	else
	{
		tower_of_Hanoi(H-1,frompeg,intermediatepeg,topeg);
		count++;
		tower_of_Hanoi(H-1,intermediatepeg,topeg,frompeg);
		}
}
