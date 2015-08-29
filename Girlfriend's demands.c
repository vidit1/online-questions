#include<stdio.h>
#include<string.h>
int main()
{
    char s[10000];
    long int n,len;
    long long int a,b;
    int i;
    scanf("%s",s);
    len=strlen(s);
    scanf("%d",&n);
    if(n>=100000)
        return 0;
    for(i=0;i<n;i++)
    {
        scanf("%lld %lld",&a,&b);
        if(a>100000000||b>100000000)
            break;
        if(a>len)
        {
            a=a%len;
        }
        if(b>len)
        {
             b=b%len;
        }
        a--;
        b--;

        if(s[a]==s[b])
        {
            printf("\nYES");
        }
        else
        {
                printf("\nNo");
        }
    }
}
