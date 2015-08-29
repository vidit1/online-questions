#include<stdio.h>
int main()
{
    long int a;
    while(1)
    {
        scanf("%ld",&a);
        if(a==-1)
            break;
        else
        {
            if(a%2==0)
            printf("%ld\n",a);
        }

    }
}
