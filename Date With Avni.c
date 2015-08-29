#include<stdio.h>
#include<string.h>
int main()
{
     static long long int n,len,flag;
    register long long int i,j;
    char s[200];
    scanf("%d",&n);
    if(n<=100)
    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        len=strlen(s);
        if(len>100)
            continue;
        flag=1;
        for(j=0;j<(len-1);j++)
        {
            if(s[j]==s[j+1])
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
            printf("SLAP\n");
        else
            printf("KISS\n");
    }
}
