#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/*Defining structure of a single node of a binary tree*/
typedef struct node_type
{
    struct node_type *left;
    int data;
    struct node_type *right;
}node;
//initializing root node
node *root=NULL;
int arr[1000],i=0;
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
//prints the tree in pre_order form
void print_preorder(node *center)
{
    if (center!=NULL)
    {
        printf("%d\n",center->data);
        print_preorder(center->left);
        print_preorder(center->right);
    }

}
//prints the tree in in_order form
void print_inorder(node *center)
{
    if (center!=NULL)
    {
        print_inorder(center->left);
        printf("%d\n",center->data);
        print_inorder(center->right);
    }
}
//prints the tree in post_order form
void print_postorder(node *center)
{
    if (center!=NULL)
    {
        print_postorder(center->left);
        print_postorder(center->right);
        printf("%d\n",center->data);
    }
}
int height(node *temp)
{
    int r=0,l=0,m=0;
    if(temp==NULL)
        return 0;
    if(temp->left!=NULL)
        l=temp->left->data+height(temp->left);
    if(temp->right!=NULL)
        r=temp->right->data+height(temp->right);
    m=maxi(l,r);
    return (m);
}
int maxi(int a,int b)
{
    if(a>b)
        return a;
    else if(b>a)
        return b;
    else
        return a;
}
int longest(node *temp)
{
    int r=0,l=0;
    if(temp==NULL)
        return 0;
    printf("\n%d=",temp->data);
    if(temp->left!=NULL)
        l=height(temp->left)+temp->left->data;
    printf("%d,",l);
    if(temp->right!=NULL)
        r=height(temp->right)+temp->right->data;
    printf("%d",r);
    return (r+l+temp->data);
}
void path(node *temp)
{
    if(temp==NULL)
        return;
    path(temp->left);
    path(temp->right);
    arr[i]=longest(temp);
    i++;
}
int main()
{
    char input[3];
    int flag,data=0,h;
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
        printf("\nEnter the data to the new node");
        //scan data
        scanf("%d",&data);
        //calling the create node function to create new node
        create_node(root,data);
        printf("\nDo you want to enter new node(yes/no):");
        scanf("%s",input);
        //calling string_test fuction to check whether the input is yes or no
        flag=string_test(input);
    }
    //display the tree in pre_order
    printf("\npreorder\n");
    print_preorder(root);
    //display the tree in in_order
    printf("\ninorder\n");
    print_inorder(root);
    //display the tree in post_order
    printf("\npostorder\n");
    print_postorder(root);
    path(root);
    h=arraymax(root);
    printf("\nmax of the tree: %d",h);
    return 0;
}
int arraymax()
{
    int temp,j;
    temp=arr[0];
    printf("\n");
    for(j=0;j<i;j++)
        printf("%d\t",arr[j]);
    for(j=0;j<i;j++)
    {
        if(temp<arr[j])
            temp=arr[j];
    }
    return temp;
}

