#include<stdio.h>
#include<conio.h>
int main()
{
    int *a,*b,i;
    a=(int*)malloc(3);
    b=(int*)malloc(3);
    store(a);
    store(b);
    print(a,3);
    print(b,3);
}
void print(int a[],int x)
{
    int i;
    for(i=0;i<x;i++)
    {
        printf("%d\t",a[i]);
    }
}
void store(int x[])
{
    int i;
    for(i=0;i<3;i++)
    {
        scanf("%d",&x[i]);
    }
    return x;
}
