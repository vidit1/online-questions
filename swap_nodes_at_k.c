#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/*Definig the structure of each nod of the linked list*/
struct node_type
{
	int data;
	struct node_type * next;
};
int length=0;
typedef struct node_type node;
/*create_node is function which creates new node in a linkes list,
 saves data in it and links the new node with previious node which
 passed on by the main function*/
node* create_node(node *current)
{
    //Initializingnew node
    node *new_node=(node*)malloc(sizeof(node));
    printf("\nEnter data to the node: ");
    //Saving data in the new node
    scanf("%d",&new_node->data);
    //Linking the previous node with the new node
    current->next=new_node;
    //New node is not further pointig to any node so NULL
    new_node->next=NULL;
    //Returning the new node to the main fuction
    return new_node;
}
void swaping(int k,node *head)
{
    int x,m;
    node *pre_s,*current_s,*next_s,*pre_l,*current_l,*next_l;
    current_s=head;
    for(x=0;x<k;x++)
    {
        pre_s=current_s;
        current_s=current_s->next;
    }
    next_s=current_s->next;
    printf("\nfrom beginig node to be swaped=%d",current_s->data);
    m=length-k;
    current_l=head;
    for(x=0;x<m-1;x++)
    {
        pre_l=current_l;
        current_l=current_l->next;

    }
    next_l=current_l->next;
    printf("\nfrom end node to be swaped=%d",current_l->data);
    pre_s->next=current_l;
    pre_l->next=current_s;
    current_l->next=next_s;
    current_s->next=next_l;
    display(head);

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
    printf("\nLength of list = %d",length);

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
int main()
{
    int m,k,j,flag;
    char  input[3];
    //creating 3 node type variables new_node current and head
    node *new_node,*current,*head=NULL;
    //Dynamic initializtion
    new_node=(node *)malloc(sizeof(node));
    printf("\nEneter data to the node: ");
    //Storing some data
    scanf("%d",&new_node->data);
    //head pointing to the new node
    head=new_node;
    current=new_node;
    length++;
    printf("\nDo you want to enter new node(yes/no):");
    scanf("%s",input);
    flag=string_test(input);
    //Iterate itself until flag is 1 i. the string entered is yes
    while(flag==1)
    {
        length++;
        //calling create_node function to create new node and link it
        current=create_node(current);
        printf("\nDo you want to enter new node(yes/no):");
        scanf("%s",input);
        //calling string_test fuction to check whether the input is yes or no
        flag=string_test(input);
    }
    //Calling the display function and passing head as the value
    display(head);
    printf("\nEnter the position of the node to swap from end and begining: ");
    scanf("%d",&m);
    if(m<length)
    {
        int j;
        j=m%2;
        if(j==0)
        {
            k=m/2;
        }
        if(m==k)
            {
                printf("\nPosition of node from end and begining is same so no changes in the linked list..");
                display(head);
            }
        else
            swaping(k,head);
    }
    else
    printf("\nThe position entered is greater than the length of the linked list");
    return 0;
}
