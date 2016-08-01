#include<stdio.h>
#include<stdlib.h>
struct node {
	struct node *prev;
	int info;
	struct node *next;
};
struct node *create_list(struct node *start);
void display(struct node *start);
struct node *del (struct node *start ,int data);
struct node *insert(struct node *start ,int data);
void count(struct node *start ,int data);
main ()
{
	int choice,data,item,i;
	struct node *start=NULL;
	while(1)
    { 
		printf("1.create list\n");
		printf("2.Display\n");
		printf("3.delete\n");
		printf("4.insert\n");
		printf("5.count\n");
		printf("enter your choice no :");
		scanf("%d",&choice);
	    switch(choice)
	    {
		
     	case 1:
	    	start=create_list(start);
		    break;
	    case 2:
	    	display(start);
		    break;
	    case 3:
		    printf("enter the element to be deleted:");
		    scanf("%d",&data);
		    start=del(start,data);
		    break;
	    case 4:
		    printf("enter the element to be inserted:");
		    scanf("%d",&data);
		    start=insert(start,data);
		    break;
	    case 5:
		    count(start,data);
		    break;
		for(i=1;i<6;i++)
		    {
		    	if (choice!=i);
		    	printf("wrong choice");
		    }
        }
    }
}
void display(struct node *start)
{
	struct node *p;
	if( start==NULL)
	{
		printf("list is empty");
		return;
	}
	p=start;
	printf("list is:\n");
	while(p!=NULL)
	{
		printf("%d",p->info);
		p=p->next;
	}
	printf("\n");
}
struct node *create_list(struct node *start)
{
	int i,n,data;
	printf("enter the no of nodes :");
	scanf("%d",&n);
	start=NULL;
	if(n==0)
	      return start;
	 printf("enter the element to be inserted:");
	 scanf("%d",&data);
	 start=insert(start,data);
	  for(i=0;i<=n;i++)
	   {
	   	printf("enter the element to inserted:");
	   	scanf("%d",&data);
	   	start=insert(start,data);
	   }
	   return start;
	     
}
struct node *del(struct node *start,int data)
{
	struct node *tmp;
	if(start==NULL)
	{
		printf("list is empty\n");
		return start;
	}
	if(start->info==data)
	tmp=start;
	start=start->next;
	start->prev=NULL;
	free(tmp);
	return start;
}
void count(struct node *start,int data)
{
	struct node *p=start;
	struct node *link;
    int count=1;
    while(p!=NULL)
    {
    	p=p->next;
    	count++;
    }
}    
