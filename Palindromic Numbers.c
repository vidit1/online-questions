#include<stdio.h>
int main()
{
    int n,a,b,no,j,i;
    scanf("%d",&n);
    if(n>10)
        return 0;
    for(j=0;j<n;j++)
    {
        no=0;
        scanf("%d %d",&a,&b);
        for(i=a;i<=b;i++)
        {
            if(palid(i))
                no++;
        }
        printf("\n%d",no);

    }


}
int palid(int x)
{
    int temp,a=0,b,c;
    temp=x;
    while(x>0)
    {
       b=x%10;
       a=a*10+b;
       x=x/10;
    }
    if(a==temp)
        return 1;
    else
        return 0;
}
