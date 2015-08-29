#include<stdio.h>
int main()
{
    int t,i,flag=1;
    long long int no;
    scanf("%d",&t);
    for(i=0;i<t;i++);
    {
        flag=1;
        printf("..\n");
        scanf("%lld",&no);
        while(flag)
        {
            no++;
            flag=palidrome(no);
            if(!flag)
                printf("%lld",no);
        }
    }
    return 0;
}
int palidrome(long long int no)
{
    long long int new=0,temp,org;
    org=no;
    while(no>0)
    {
        temp=no%10;
        new=new*10+temp;
        no=no/10;
    }

    if(org==new)
    {
        return 0;
    }
    else
        return 1;
}
