#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int nodes=0,nodes2=0;
int max=100;
/*Defining structure of a single node of a binary tree*/
typedef struct node_type
{
    struct node_type *left;
    int data;
    struct node_type *right;
}node;
//initializing root nodea
node *root=NULL,*root2=NULL;
int x=0;
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
//prints the tree in in_order form
void print_inorder(node *center,int inorder[],int &i)
{

        if(center==NULL)
        {
            inorder[i]=9999;
            i++;
        }
        print_inorder(center->left,inorder,i);
        inorder[i]=center->data;
        printf("%d\t",inorder[i]);
        i++;
        print_inorder(center->right,inorder,i);

}
//prints the tree in pre_order form
void print_preorder(node *center,int preorder[],int &i)
{

        if(center==NULL)
        {
            preorder[i]=9999;
            i++;
        }
        preorder[i]=center->data;
        printf("%d\t",preorder[i]);
        i++;
        print_preorder(center->left,preorder,i);
        print_preorder(center->right,preorder,i);

}
void print(int arr[],int &i)
{
    int x;
    for(x=0;x<i;x++)
    {
        printf("%d\t",arr[x]);
    }
}

int main()
{
    char input[3];
    int flag,data,i;
    int inorder_tree1[max],inorder_tree2[max],preorder_tree1[max],preorder_tree2[max];
    printf("\nCreating first treee\n");
    //dynamic allocatio of the root
    root=(node*)malloc(sizeof(node));
    printf("\nEnter the data to the node");
    //assign data
    scanf("%d",&root->data);
    root->left=NULL;
    root->right=NULL;
    nodes++;
    //for new node
    printf("\nDo you want to enter new node(yes/no):");
    scanf("%s",input);
    flag=string_test(input);
    //Iterate itself until flag is 1 i. the string entered is yes
    while(flag==1)
    {
        //for new node
        printf("\nEnter the data to the new node");
        //scan data
        scanf("%d",&data);
        //calling the create node function to create new node
        nodes++;
        create_node(root,data);
        printf("\nDo you want to enter new node(yes/no):");
        scanf("%s",input);
        //calling string_test fuction to check whether the input is yes or no
        flag=string_test(input);
    }


    printf("\n inorder:");
    print_inorder(root,inorder_tree1,0);
    printf("\n preorder:");
    print_preorder(root,preorder_tree1,0);
    printf("\nCreating second treee\n");
    //dynamic allocatio of the root
    root2=(node*)malloc(sizeof(node));
    printf("\nEnter the data to the node");
    //assign data
    scanf("%d",&root2->data);
    nodes2++;
    root2->left=NULL;
    root2->right=NULL;
    //for new node
    printf("\nDo you want to enter new node(yes/no):");
    scanf("%s",input);
    flag=string_test(input);
    //Iterate itself until flag is 1 i. the string entered is yes
    while(flag==1)
    {
        //for new node
        printf("\nEnter the data to the new node");
        //scan data
        scanf("%d",&data);
        nodes2++;
        //calling the create node function to create new node
        create_node(root2,data);
        printf("\nDo you want to enter new node(yes/no):");
        scanf("%s",input);
        //calling string_test fuction to check whether the input is yes or no
        flag=string_test(input);
    }

    printf("\ninorder:");
    print_inorder(root2,inorder_tree2,0);
    //callcing identical finction to check whether the both the trees are identical or not
    printf("\npreorder:");
    print_preorder(root2,preorder_tree2,0);
    printf("\n");
    for(i=0;i<nodes;i++)
    {
        printf("%d\t",inorder_tree1[i]);
    }
    printf("\nTree 1:");
    printf("\ninorder\n");
    print(inorder_tree1,nodes);
    printf("\npreorder\n");
    print(preorder_tree1,nodes);
    printf("\nTree 2:");
    printf("\ninorder\n");
    print(inorder_tree2,nodes2);
    printf("\npreorder\n");
    print(preorder_tree2,nodes2);
    return 0;
}
