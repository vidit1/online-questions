#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void display();
void display2();
/*Definig the structure of each nod of the linked list*/
struct defining_node
{
    int data;
    struct defining_node *next;
}*head=NULL,*new_head=NULL;
int length_1=0,length_2=0;
typedef struct defining_node node;
/*create_node is function which creates new node in a linkes list,
 saves data in it and links the new node with previious node which
 passed on by the main function*/
node* create_node(node *current)
{
    //Initializingnew node
    node *new_node=(node*)malloc(sizeof(node));
    printf("\nEnter data to the node in range(0/1/2): ");
    //Saving data in the new node
    scanf("%d",&new_node->data);
    //Linking the previous node with the new node
    current->next=new_node;
    //New node is not further pointig to any node so NULL
    new_node->next=NULL;
    //Returning the new node to the main fuction
    return new_node;
}
/*Display function takes the value of head from the main function
and displays the full linkes list*/
void display(node *current)
{
    printf("\nLinked list:");
    //Traversing all the nodes in the linked listone by one
    while(current!=NULL)
    {
        //Displaying the data of each node
        printf("%d-->",current->data);
        //Moving forward
        current=current->next;
    }
    //Printing NULL because the last node does not point to any node
    printf("NULL");

}
/*string_test function tests that the string passed is equal to "yes" or not
and return a value to main function based on value flag is 0 if string is yes, value passed is 1
 and  and 1 if not, value passed is 0*/
int string_test(char str1[])
{
    int i=0,flag=0;
    char str2[]="yes";
    //Two string are compared character by charater
    while(str1[i]!='\0' && str2[i]!='\0')
    {
        //if characters of both the string are not same flag is set to 1
        if(str1[i]!=str2[i])
        {
             flag=1;
             break;
        }
        i++;
    }
    //Depending flag value is returned to the main function
    if (flag==0 && str1[i]=='\0' && str2[i]=='\0')
         return 1;
    else
         return 0;

}
void merger()
{
    int flag;
    node *temp,*current,*a,*b;
    if(length_1>length_2)
    {
        current=head;
        a=new_head;
        flag=1;
    }else
    {
        current=new_head;
        a=head;
        flag=2;
    }
        do
        {
            temp=current->next;
            current->next=a;
            b=a->next;
            a->next=temp;
            current=temp;
            a=b;
        }while(a!=NULL||b!=NULL);
        if(flag==1)
        display(head);
        else if(flag==2)
        display(new_head);

}

int main()
{
    int flag;
    char  input[3];
    //creating 3 node type variables new_node current and head
    node *new_node,*current;
    printf("\nEnter data to First linked list\n");
    //Dynamic initializtion
    new_node=(node *)malloc(sizeof(node));
    printf("\nEnter data to the node: ");
    //Storing some data
    scanf("%d",&new_node->data);
    //head pointing to the new node
    head=new_node;
    new_node->next=NULL;
    length_1++;
    current=new_node;
    printf("\nDo you want to enter new node(yes/no):");
    scanf("%s",input);
    flag=string_test(input);
    //Iterate itself until flag is 1 i. the string entered is yes
    while(flag==1)
    {
        length_1++;
        //calling create_node function to create new node and link it
        current=create_node(current);
        printf("\nDo you want to enter new node(yes/no):");
        scanf("%s",input);
        //calling string_test fuction to check whether the input is yes or no
        flag=string_test(input);
    }
    //Calling the display function and passing head as the value
    display(head);
    printf("\nEnter the data to Second linked list");
    //Dynamic initializtion
    new_node=(node *)malloc(sizeof(node));
    printf("\nEnter data to the node:  ");
    //Storing some data
    scanf("%d",&new_node->data);
    //head pointing to the new node
    new_head=new_node;
    new_node->next=NULL;
    length_2++;
    current=new_node;
    printf("\nDo you want to enter new node(yes/no):");
    scanf("%s",input);
    flag=string_test(input);
    //Iterate itself until flag is 1 i. the string entered is yes
    while(flag==1)
    {
        length_2++;
        //calling create_node function to create new node and link it
        current=create_node(current);
        printf("\nDo you want to enter new node(yes/no):");
        scanf("%s",input);
        //calling string_test fuction to check whether the input is yes or no
        flag=string_test(input);
    }
    //Calling the display function and passing head as the value
    display(new_head);
    merger();

    return 0;
}
