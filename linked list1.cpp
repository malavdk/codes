#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{ 
	int val;
	struct node* next;
};
int main()
{
	int n,i;
	struct node *head;
	struct node *a=(struct node*)malloc(sizeof(struct node));
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(i==1)
		{
			cin>>a->val;
			head=a;
		}
		if(i!=1)
		{
			struct node *p=(struct node*)malloc(sizeof(struct node));
			cin>>p->val;
			a->next=p;
			p->next=NULL;
			a=p;
		}
	}
	struct node* j;
	for(j=head;j!=NULL;j=a->next)
	{
		a=j;
		cout<<a->val<<endl;
	}
	return 0;
}

