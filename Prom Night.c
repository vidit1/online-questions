#include<stdio.h>
#include<stdlib.h>
void arrange(unsigned int a[],unsigned int n)
{
    int c,d,position,swap;
    for(c=0;c<(n-1);c++)
    {
        position=c;
        for(d =c+1;d<n;d++)
        {
            if(a[position]>a[d])
            position=d;
        }
        if( position!=c)
        {
            swap=a[c];
            a[c]=a[position];
            a[position]=swap;
        }
    }
}
int main()
{
    unsigned int t,i,j,m,n,*boy,*girl,k;
    scanf("%d",&t);
    if(t>10)
    {
        printf("\nNo");
        return 0;
    }
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&m,&n);
        boy=(int*)malloc(m);
        girl=(int*)malloc(n);
        if(m>10000||n>10000)
        {
            printf("\nNO");
            continue;
        }
        for(j=0;j<m;j++)
        {
            scanf("%d",&boy[j]);
        }
        for(j=0;j<n;j++)
        {
            scanf("%d",&girl[j]);
        }
        arrange(boy,m);
        arrange(girl,n);
        for(j=0;j<m;j++)
        {
            printf("%d",boy[j]);
        }
        for(j=0;j<n;j++)
        {
            printf("%d",girl[j]);
        }
        k=0;
        for(j=0;j<m;j++)
        {
            if(k==n)
            {

               break;
            }
            printf("\n%d %d",boy[k],girl[j]);
            if(boy[k]>girl[j])
            {
                k++;
            }
        }
        if(k==m)
            printf("\nYES");
        else
            printf("\nNO");
        free(boy);
        free(girl);
    }
}
