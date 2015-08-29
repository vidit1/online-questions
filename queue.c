#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define inf 999;

int out=0,in=0;
/*Defining structure of a single node of a binary tree*/
typedef struct node_type
{
    struct node_type *left;
    int data;
    struct node_type *right;
}node;
//initializing root node
node *root=NULL;
int qu[500];
//create node function traverse the treee according to the data and places the new node
void create_node(node *center,int data)
{
    node *new_node=NULL;
    //check if data is smaller the root node
        if(data<center->data)
        {
            //check if left of the root is empty
            if(center->left==NULL)
            {
                //dynamic allocation
                new_node=(node*)malloc(sizeof(node));
                new_node->data=data;
                new_node->left=NULL;
                new_node->right=NULL;
                //place the new node to the left of root node
                center->left=new_node;
            }
            else
            {
                //if left is not empty, move to the left node and call the function and now the new root is the left node
               create_node(center->left,data);
            }
        }
        //check if the node is greater than the root node
        else if(data>center->data)
        {
            //check if right of the root is empty
             if(center->right==NULL)
            {
                //dynamic allocation
                new_node=(node*)malloc(sizeof(node));
                new_node->data=data;
                new_node->left=NULL;
                new_node->right=NULL;
                //place the new node to the right of root node
                center->right=new_node;
            }
            else
            {
                //if right is not empty, move to the right node and call the function and now the new root is the left node
                create_node(center->right,data);
            }
        }
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
void create_queue(node *node)
{
    qu[in]=999;
    in++;
    qu[in]=node;
    in++;
    qu[in]=999;
    in++;
}
void insert_queue(node* temp)
{
    qu[in]=temp;
    in++;

}
int delete_queue()
{
    return qu[out++];
}

void cousin(int c1,int c2,node *temp)
{
    create_queue(temp);
    temp=delete_queue();
    int i,j,flag=0;
    while(temp&&in!=out&&flag!=2)
    {

        if((int)temp==999)
        {

            qu[in]=inf;
            in++;
        }
        else
        {
            if(temp->left!=NULL)
                insert_queue(temp->left);
            if(temp->right!=NULL)
                insert_queue(temp->right);
            if(temp->data==c1||temp->data==c2)
                flag++;
        }
        temp=delete_queue();
    }
    flag=0;
    for(i=0;i<in;i++)
    {
        temp=qu[i];
        if(qu[i]!=999)
        if(temp->data==c1||temp->data==c2)
        {
            for(j=i+1;j<in;j++)
            {
                temp=qu[j];
                if((int)temp==999)
                {
                    flag=0;
                    break;
                }
                if(temp->data==c1||temp->data==c2)
                {
                    flag=1;
                    break;
                }
            }
            if(!flag)
            {
                printf("\nNot Cousin");
                return;
            }
            else
                break;
        }
    }
    while(qu[i]!=999)
        i--;

    flag=0;
    i=i-2;
    while(qu[i]!=999)
    {
        temp=qu[i];
        if(temp->right!=NULL)
        {
            if(temp->right->data==c1||temp->right->data==c2)
            {
                if(temp->left!=NULL)
                {
                    if(temp->left->data==c1||temp->left->data==c2)
                    {
                        flag=1;
                        break;
                    }
                }
            }
        }
        i--;
    }
    if(!flag)
        printf("\nCousin");
    else
        printf("\nNot Cousin");
}
int main()
{
    char input[3];
    int flag,data=0,c1,c2,level,i;
    node * temp;
    //dynamic allocatio of the root
    root=(node*)malloc(sizeof(node));
    printf("\nEnter the data to the node");
    //assign data
    scanf("%d",&root->data);
    root->left=NULL;
    root->right=NULL;
    //for new node
    printf("\nDo you want to enter new node(yes/no):");
    scanf("%s",input);
    flag=string_test(input);
    //Iterate itself until flag is 1 i. the string entered is yes
    while(flag==1)
    {
        //for new node
        printf("\nEnter the data to the new node:");
        //scan data
        scanf("%d",&data);
        //calling the create node function to create new node
        create_node(root,data);
        printf("\nDo you want to enter new node(yes/no):");
        scanf("%s",input);
        //calling string_test fuction to check whether the input is yes or no
        flag=string_test(input);
    }
    flag=1;
    while(flag)
    {
        scanf("%d %d",&c1,&c2);
        cousin(c1,c2,root);
        printf("\nDo you want to check again:");
        scanf("%s",input);
        flag=string_test(input);
    }
    return 0;
}
