#include<iostream>
using namespace std;
struct node
{
	int val;
	int next;
};
int main()
{
	int head;
	cout<<"enter the head of linked list";
	cin>>head;
	struct node arr[5];
	arr[0].val=10;
	arr[0].next=2;
	arr[1].val=20;
	arr[1].next=-1;
	arr[2].val=30;
	arr[2].next=1;
	while(arr[head].next!=-1)
	{
	cout<<arr[head].val<<endl;
	head=arr[head].next;
	}
	cout<<arr[head].val;
}
