#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *link;
}*start=NULL;


void insert1()
{
    struct node *temp,*nn;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\n enter the number you want to enter");
    scanf("%d",&temp->data);
    if(start==NULL)
    {
        start=temp;
        temp->link=NULL;
    }
    else
    {
    nn=start;
    while(nn->link!=NULL)
    {
        nn=nn->link;
    }
    nn->link=temp;
    temp->link=NULL;
    }

}

void display()
{
    struct node *ptr;
    ptr=start;

        while(ptr != NULL)
        {

        printf("\n %d",ptr->data);
        ptr=ptr->link;
        }

}

void main()
{
int ch,num,ch1=1;
while(ch1==1)
{
printf("\n 1 insert \n 2 display");
scanf("%d",&ch);
switch(ch)
{


case 1:
insert1();
break;

case 2:
display();
break;

}
printf("\n do you want to continue enter 1");
scanf("%d",&ch1);
}
}
