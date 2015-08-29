#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int node_number=0;
struct node_type
{
	int data;
	struct node_type * next;
}*head=NULL,*tail=NULL;
typedef struct node_type node;
void nodee()
{	char ch;
	do
	{
		node *new_node,*current;
		new_node=(node*)malloc(sizeof(node));
		printf("\nenter data to the element of the linked list=");
		scanf("%d",&new_node->data);
		if(head==NULL)
		{
			head=new_node;
			current=new_node;
			tail=new_node;
			node_number++;
		}
		else
		{
			current->next=new_node;
			current=new_node;
			tail=new_node;
			new_node->next=head;
			node_number++;
		}
		printf("\ndo you want to enter new element(Y/N):");
		ch=getche();
		
	}while(ch!='n');
}

void delete_start()
{
	node *temp,*loc;
	temp=head;
	head=temp->next;
	tail=loc;
	loc->next=head;
	free(temp);
	display();
	node_number--;
}
void delete_end()
{
	node *temp,*loc;
	loc=head;
	while(loc!=tail)
	{
		temp=loc;
		loc=loc->next;
	}
	temp->next=head;
	tail=temp;
	free(loc);
	display();
	node_number--;
}
void delete_middle()
{
	char ch;
	do
	{
		int i,j,count=0;
		node *temp,*loc;
		
		printf("\n1.Enter the location to of the node you want to delete\n2.Enter data of the  node you want to delete\n");
		scanf("%d",&i);
		switch(i)
		{
			case 1:
				
				printf("\nenter the position of the node");
				scanf("%d",&j);
				if(j==0)
				delete_start();
				else if(j==node_number)
				delete_end();
				else
				{
					temp=head;
					while(count!=j)
					{
						loc=temp;
						temp=temp->next;
						count++;
					}
					loc->next=temp->next;
					node_number--;
					free(temp);
					display();
				}
				
				break;
			case 2:
				printf("\nenter the data of the node you want to delete");
				scanf("%d",&j);
				if(j==head->data)
				delete_start();
				else if(j==tail->data)
				delete_end();
				else
				{
				
					temp=head;
					while(temp->data!=j)
					{
						loc=temp;
						temp=temp->data;
					}
					loc->next=temp->next;
					free(temp);
					node_number--;
				}
				display();
				
				break;
			default:
				printf("\nWrong choice entered");
				
		}
		printf("\ndo you want to go to the previous menu");
		ch=getche();
	}while(ch!='n');
}
void insert_start()
{
	node *new_node,*temp,*loc;
	new_node=(node*)malloc(sizeof(node));
	printf("\nEnter the data to the node=");
	scanf("%d",&new_node->data);
	temp=head;
	new_node->next=temp;
	head=new_node;
	loc=tail;
	loc->next=head;
	display();node_number++;
}
void insert_end()
{
	node *new_node,*temp;
	new_node=(node*)malloc(sizeof(node));
	printf("\nEnter the data to the node=");
	scanf("%d",&new_node->data);
	temp=head;
	while(temp!=tail)
	{
		temp=temp->next;
	}
	temp->next=new_node;
	tail=new_node;
	new_node->next=head;
	display();node_number++;
	
}
void insert_middle()
{
	char ch;
	do
	{
		int i,j,count=0;
		node *temp,*loc,*new_node;
		printf("\n1.Enter the location to of the node after you want to enter new node \n2.Enter data of the node after you want to enter new node\n");
		scanf("%d",&i);
		new_node=(node*)malloc(sizeof(node));
		printf("\nEnter the data to the node=");
		scanf("%d",&new_node->data);
		switch(i)
		{
			case 1:
				
				printf("\nenter the position of the node");
				scanf("%d",&j);
				if(j==0)
				insert_start();
				else if(j==node_number)
				insert_end();
				else
				{
					temp=head;
					while(count!=j)
					{
						loc=temp;
						temp=temp->next;
						count++;
					}
				
					loc->next=new_node;
					new_node->next=temp;
					display();node_number++;
				}
				break;
			case 2:
				
				printf("\nenter the data of the node");
				scanf("%d",&j);
				if(j==head->data)
				insert_start();
				else if(j==tail->data)
				insert_end();
				else
				{
					temp=head;
					while(temp->data!=j)
					{
						loc=temp;
						temp=temp->next;
					}
					loc->next=new_node;
					new_node->next=temp;
					display();node_number++;
				}
				break;
			default:
				printf("\nwrong choice entered ");
		}
		printf("\ndo you want to go to the previous menu");
		ch=getche();
	}while(ch!='n');
}
void display()
{
	
	node *new_node;
	printf("\nThe Linked List");
 	new_node=head;
 	do
   	{
   		printf("%d--->",new_node->data);
   		new_node=new_node->next;
   	}while(new_node!=head);
   	printf("return to first element --->%d",new_node->data);
   	printf("\ntotal number of node=%d",node_number);
   	printf("\ndata in head=%d\ndata in tail=%d",head->data,tail->data);
}
int main()
{	
	char ch;
	nodee();
	display();
	printf("\n--------------Circular List---------------\n");
	do
	{int i,j;
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
