#include<stdio.h>
int main()
{
    int i=0,j,temp=5,x=0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<temp;j++)
        { printf(" ");
        } temp--;
        for(j=1;j<=2*i-1;j++)
        {
            printf("%d\t",++x);
        }
        printf("\n");
    }
}
