#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node_type
{
	struct node_type * pre;
	int data;
	struct node_type * next;
}*head=NULL,*tail=NULL;
typedef struct node_type node;
void create_node()
{
	char ch;
	do
	{
		node * current,* new_node;
		new_node=(node*)malloc(sizeof(node));
		printf("\nEnter data to the node of linked list:");
		scanf("%d",&new_node->data);
		if(head==NULL&&tail==NULL)
		{
			head=new_node;
			tail=new_node;
			current=new_node;
			new_node->pre=NULL;
			new_node->next=NULL;
		}
		else
		{	
			new_node->pre=current;
			new_node->next=NULL;
			tail=new_node;
			current->next=new_node;
			current=new_node;
		}
		printf("\nDo you want to enter new node(Y/N):");
		ch=getche();
	}while(ch!='n');
}
void delete_start()
{
	node * temp,*loc;
	temp=head;
	loc=temp->next;
	head=loc;
	loc->pre=NULL;
	free(temp);
	display();
}
void delete_end()
{
	node * temp,*loc;	
	temp=tail;
	loc=temp->pre;
	tail=loc;
	loc->next=NULL;
	free(temp);
	display();
}
void delete_middle()
{
	char ch;
	int data1,i,j,count=1;
	node * temp,* loc, *previous;
	do
	{
		printf("\nEnter a choice\n1.to delete using postion\n2.to delete by comparing data\n");
		scanf("%d",&i);
		switch(i)
		{
			case 1:
				printf("\nenter the postion of the node you want to delete\n");
				scanf("%d",&j);
				loc=head;
				while(count!=j)
				{
					previous=loc;
					loc=loc->next;
					count++;
				}
				if(loc->next==NULL)
				{
					previous->next=NULL;
					tail=previous;
					free(loc);
				}
				else if(loc->pre==NULL)
				{
					temp=loc;
					temp=temp->next;
					temp->pre=NULL;
					head=temp;
					free(loc);
				}
				else
				{
					temp=loc;
					previous->next=temp->next;
					temp=temp->next;
					temp->pre=previous;
					free(loc);
				}			
				display();
				break;
			case 2:	
				printf("\nenter the data before which u want to want to add the node\n");
				scanf("%d",&j);
				loc=head;
				while(loc->data!=j)
				{
					previous=loc;
					loc=loc->next;
				}
				temp=loc;
				previous->next=temp->next;
				temp=temp->next;
				temp->pre=previous;
				free(loc);
				display();
				break;
		}
	printf("\ndo you want to go to previous menu Y/N:");
	ch=getche();
	}while(ch!='n');
}
void insert_start()
{
	int data1;
	node * temp,*t;
	temp=(node*)malloc(sizeof(node));
	printf("\nenter data to the new element");
	scanf("%d",&temp->data);
	temp->pre=NULL;
	temp->next=head;
	t=head;
	t->pre=temp;
	head=temp;
	display();
}
void insert_end()
{
	int data1;
	node * temp,* loc;
	temp=(node*)malloc(sizeof(node));
	printf("\nenter data to the new element");
	scanf("%d",&temp->data);
	loc=tail;
	temp->pre=loc;
	loc->next=temp;
	temp->next=NULL;
	tail=temp;
	display();
	
}
void insert_middle()
{
	char ch;
	int data1,i,j,count=1;
	node * temp,* loc, *previous;
	temp=(node*)malloc(sizeof(node));
	printf("\nenter data to the new element");
	scanf("%d",&data1);
	temp->data=data1;
	do
	{
	
	printf("\nEnter a choice\n1.to insert using postion\n2.to insert bu comparing data\n");
	scanf("%d",&i);
	switch(i)
	{
		case 1:
			printf("\nenter the postion at which you want to enter the new node\n");
			scanf("%d",&j);
			loc=head;
			while(count!=j)
			{
				previous=loc;
				loc=loc->next;
				count++;
			}
			if(loc==tail)
			{
				temp->next=NULL;
				temp->pre=loc;
				loc->next=temp;
			}
			else if(loc==head)
			{
				temp->pre=NULL;
				loc->pre=temp;
				temp->next=loc;
				head=temp;
			}
			else
			{
				previous->next=temp;
				temp->pre=previous;
				temp->next=loc;	
				loc=loc->next;
				loc->pre=temp;
			}
			
			display();
			break;
		case 2:
			printf("\nenter the data before which u want to want to add the node\n");
			scanf("%d",&j);
			loc=head;
			while(loc->data!=j)
			{
				previous=loc;
				loc=loc->next;
				count++;
			}
			if(loc==tail)
			{
				temp->next=NULL;
				temp->pre=loc;
				loc->next=temp;
			}
			else if(loc==head)
			{
				temp->pre=NULL;
				loc->pre=temp;
				temp->next=loc;
				head=temp;
			}
			else
			{
				previous->next=temp;
				temp->pre=previous;
				temp->next=loc;	
				loc=loc->next;
				loc->pre=temp;
			}
			display();
		
			break;
		default:
			printf("\nwrong choice entered");
	}
	printf("\ndo you want to go to previous menu Y/N:");
	ch=getche();
	}while(ch!='n');
}
void display()
{
node *new_node,*pre_node;
 printf("\nThe Linked List : n");
 new_node=head;
 pre_node=tail;
 printf("\nforward travesing\n");
 while(new_node!=NULL)
   {
   printf("%d--->",new_node->data);
   new_node=new_node->next;
   }
printf("\nbackward traversing\n");
 while(pre_node!=NULL)
   {
   printf("%d--->",pre_node->data);
   pre_node=pre_node->pre;
   }
  printf("NULL");
}
int main()
{
	char ch;
	int i,j;
	create_node();
	display();
	do
	{
	printf("\n----------Enter a Choice-------------\n1.To Delete\n2.To Insert\n");
	scanf("%d",&i);
	switch(i)
	{
		
		
		
		case 1:
			do
			{
				printf("\n--------DELETION---------\n1.To delete from starting\n2.To delete from the end\n3.to delete from the middle\n");
				scanf("%d",&j);
				switch(j)
				{
					case 1:
						delete_start();
						break;
					case 2:
						delete_end();
						break;
					case 3:
						delete_middle();
						break;
					default:
						printf("\nwrong choice entered");
				}
				printf("\ndo you want to go to previous menu y/n:");
				ch=getche();
			}while(ch!='n');
			break;
		case 2:
			do
			{
				printf("\n--------INSERTION---------\n1.To insert at starting\n2.To insert the end\n3.to insert in middle\n");
				scanf("%d",&j);
				switch(j)
				{
					case 1:
						insert_start();
						break;
					case 2:
						insert_end();
						break;
					case 3:
						insert_middle();
						break;
					default:
						printf("\nwrong choice entered");
				}
				printf("\ndo you want to go to previous menu y/n:");
				ch=getche();
			}while(ch!='n');
			break;
		default:
			printf("\nwrong choice entered");
	}
	printf("\ndo you want to go to main menu y/n:");
	ch=getche();
	}while(ch!='n');
	getch();
	return 0;
}
