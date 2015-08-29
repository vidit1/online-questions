#include<stdio.h>
int main()
{
    long long int a;
    scanf("%lld ",&a);
    while(a!=-1)
    {
        if(a%2==0)
            printf("%lld",a);
        scanf("lld",&a);
    }
}
