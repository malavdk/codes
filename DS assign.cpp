/*DS assignment*/
#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
struct node
{
struct node *prev;
int info;
struct node *next;

};
void display(struct node *start);
struct node *create_list(struct node *start);
struct node *del(struct node *start,int data);
struct node *addtoempty(struct node *start,int data);
struct node *addatbeg(struct node *start,int data);
struct node *addatend(struct node *start,int data);
struct node *addafter(struct node *start,int data,int item);
struct node *addbefore(struct node *start,int data ,int item);
int noofnodes(struct node *start);



int main()
{
    int choice,data,item,count;
    struct node *start=NULL;
    while(1)
    {
        printf("1. Create List\n");        
        printf("2. Add to emptylist \n");
        printf("3. Add at beginning \n");
        printf("4. Add at end \n");
        printf("5. Add after \n");
        printf("6. Add before \n");
        printf("7. Delete a node \n");
        printf("8. Count the number of nodes \n");
        printf("9. Quit \n");
        printf(" Enter your choice: ");
        scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            start=create_list(start);
             display(start);
            break;

        case 2:
            printf("Enter the element to be inserted : ");
            scanf("%d",&data);
            start=addtoempty(start,data);
             display(start);
            break;

        case 3:
            printf("Enter the element to be inserted : ");
            scanf("%d",&data);
            start=addatbeg(start,data);
             display(start);
            break;

        case 4:
            printf("Enter the element to be inserted : ");
            scanf("%d",&data);
            start=addatend(start,data);
             display(start);
            break;

        case 5:
            printf("Enter the element to be inserted : ");
            scanf("%d",&data);
            printf("Enter the element after which to insert : ");
            scanf("%d",&item);
            start=addafter(start,data,item);
             display(start);
            break;

        case 6:
            printf("Enter the element to be inserted : ");
            scanf("%d",&data);
            printf("Enter the element before which to insert : ");
            scanf("%d",&item);
            start=addbefore(start,data,item);
             display(start);
            break;

        case 7:
            printf("Enter the element to be deleted : ");
            scanf("%d", &data);
            start=del(start,data);
             display(start);
            break;

        case 8:
            count=noofnodes(start);
            printf("Number of nodes present are: %d\n",count);
            display(start);
            break;

        case 9:
            exit(1);

        default:
            printf("Wrong choice\n");

     }

    } 



return 0;
}



void display(struct node *start)//to display the double linked list
{
struct node *p;
if(start==NULL)
{
printf("List is empty\n");
return;

}

p=start;
printf("List is : ");

while(p!=NULL)
{
printf("%d ",p->info);
p=p->next;

}
printf("\n");

}

struct node *create_list(struct node *start)//to crete a double linked list
{
int i,n,data;
printf("Enter the number of nodes : ");
scanf("%d",&n);
start=NULL;
if(n==0)
return start;

printf("Enter the element to be inserted : ");
scanf("%d",&data);
start=addtoempty(start,data);
for(i=2;i<=n;i++)
{
printf("Enter the element to be inserted : ");
scanf(" %d", &data);
start=addatend(start,data);

}

return start;
}


struct node *addatbeg(struct node *start,int data)//to insert a node at beginning
{
struct node *tmp;
tmp=(struct node *)malloc(sizeof(struct node));
tmp->info=data;
tmp->prev=NULL;
tmp->next=start;
start->prev=tmp;
start=tmp;
return start;

}

struct node *addtoempty(struct node *start,int data)//to insert a node in a empty linked list
{
struct node *tmp;
tmp=(struct node *)malloc(sizeof(struct node));
tmp->info=data;
tmp->prev=NULL;
tmp->next=NULL;
start=tmp;
return start;

}

struct node *addatend(struct node *start,int data)//to insert a node at the and of the linked list
{
struct node *tmp, *p;
tmp=(struct node *)malloc(sizeof(struct node));
tmp->info=data;
p=start;
while(p->next!=NULL)
p=p->next;

p->next=tmp;
tmp->next=NULL;
tmp->prev=p;
return start;

}

struct node *addafter(struct node *start,int data,int item)//to insert a node after a node 
{
struct node *tmp,*p;
tmp=(struct node *)malloc(sizeof(struct node));
tmp->info=data;
p=start;
while(p!=NULL)
{
if(p->info==item)
{
tmp->prev=p;
tmp->next=p->next;
if(p->next!=NULL);
p->next->prev=tmp;
p->next=tmp;
return start;
}
p=p->next;
}
printf("%d not present in the list\n",item);
return start;

}


struct node *addbefore(struct node *start,int data,int item)//to insert a node before a node
{
struct node *tmp,*q;
if(start==NULL)
{
printf("List is empty\n");
return start;

}
if(start->info==item)
{
tmp=(struct node *)malloc(sizeof(struct node));
tmp->info=data;
tmp->prev=NULL;
tmp->next=start;
start->prev=tmp;
start=tmp;
return start;

}

q=start;
while(q!=NULL)
{
if(q->info==item)
{
tmp=(struct node *)malloc(sizeof(struct node));
tmp->info=data;
tmp->prev=q->prev;
tmp->next=q;
q->prev->next=tmp;
q->prev=tmp;
return start;

}
q=q->next;

}
printf("%d not present in the list\n",item);
return start;

}


struct node *del(struct node *start,int data)//to delete a node in a linked list
{
struct node *tmp;
if(start==NULL)
{
printf("List is empty\n");
return start;
}
if(start->next==NULL) //deletion of only node
if(start->info==data)
{
tmp=start;
start=NULL;
free(tmp);
return start;
}
else
{
printf("Element %d not found\n",data);
return start;

}

if(start->info==data) //deletion of first node
{
tmp=start;
start=start->next;
start->prev=NULL;
free(tmp);
return start;
}
tmp=start->next; //deletion in between
while(tmp->next!=NULL)
{
if(tmp->info==data)
{
tmp->prev->next=tmp->next;
tmp->next->prev=tmp->prev;
free(tmp);
return start;

}
tmp=tmp->next;
}
if(tmp->info==data) //deletion of last node
{
tmp->prev->next=NULL;
free(tmp);
return start;
}
printf("Element %d not found\n",data);
return start;


}


int noofnodes(struct node *start)//to count no. of node in a linked list
{
int non=0;
struct node *p;
p=start;
if(start==NULL)
return non;
while(p->next!=NULL)
{
non++;
p=p->next;
}
return (non+1);
}


