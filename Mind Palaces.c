//the concept used is that start form top right corner or the bottom left corner i started from top right corner
//start comparing the query id the query is smaller tha mover left in the same ro if the query is greater than move
//down to the next row keep checking until the we find the number of we ran out of matrix.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int n,m,i,j,k,q,flag;
    long long int *a[1000],x;
    scanf("%d %d",&n,&m);
    if((n<2&&n>1000)||(m<2&&n>1000))
    {
        return 0;
    }
    for(i=0;i<n;i++)
        a[i]=(long long int *)malloc(sizeof(long long int)*m);
    for(i=0;i<n;i++)
    {
         for(j=0;j<m;j++)
         {
             scanf("%lld",&a[i][j]);
         }

    }
    scanf("%d",&q);
    for(k=0;k<q;k++)
    {
        scanf("%lld",&x);
        i=0;
        j=m-1;
        flag=0;
        while(i<n&&j>=0)
        {
            if(x==a[i][j])
            {
                printf("\n%d %d",i,j);
                flag=1;
                break;
            }
            else if(x<a[i][j])
            {
                j--;
            }
            else
                i++;
        }
        if(flag==0)
            printf("\n-1 -1");
    }
}
