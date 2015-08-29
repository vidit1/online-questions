#include<stdio.h>
int main()
{
    int i=0;
    long long unsigned int gold,dol;

    for(i=0;i<10;i++)
    {
        scanf("%lld",&gold);

        dol=gold/2+gold/3+gold/4;
        if(gold>=dol)
            printf("%lld\n",gold)
        printf("%lld\n",dol);
    }
}
