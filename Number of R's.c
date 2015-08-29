#include<stdio.h>
int max=0,min=0,start=0,end;
int main()
{
    int t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",s);
        n=strlen(s);
        rk(s,n);
    }
}
void rk(char s[],int n)
{
    for(i=0;i<n;i++)
    {
            if(s[i]=='k')
                {start=i;break;}
    }
    for(i=n-1;i>0;i--)
    {
            if(s[i]=='k')
                {end=i;break;}
    }
    for(i=0;i<n;i++)
    {
        if(s[i]=='r')
            min++;
    }
    while(start<n&&end>0)
    {

        for(i=start;i<end;i++)
        {
            if(s[i]==k)
                k++;
            else
                r++;
        }
        if(max<k)
            max=k;
        if(min>r)
            min=r;

    }
}
