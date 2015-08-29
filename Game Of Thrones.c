#include<stdio.h>
int main()
{
    int t,i,x;
    scanf("%d",&t);
        if(t>1000)
        return 0;
    for(i=0;i<t;i++)
    {
        scanf("%d",&x);
        switch(x%3)
        {
        case 0:
            printf("\nSL");
            break;
        case 1:
            printf("\nLB");
            break;
        case 2:
            printf("\nBS");
            break;
        }
    }

}
