#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;
    printf("\nEnter the number");
    scanf("%d",&i);
    j=i%2;
    if(j==0)
    {
        k=i/2;
        printf("\n%d",k);
    }
    return 0;
}
