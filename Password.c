#include<stdio.h>
#include<string.h>
#define max 50
int main()
{
    int n,i,j,flag=0,len,k;
    scanf("%d",&n);
    char s[100][14],t[14];
    if(n>100)
        return 0;
    for(i=0;i<n;i++)
    {
        scanf("%s",s[i]);
    }
    i=0;
    while(i<n&&flag==0)
    {

        len=strlen(s[i]);
        j=len-1;
        for(k=0;k<len;k++,j--)
        {
            t[k]=s[i][j];
        }
        for(j=i+1;j<n;j++)
        {
            if(len==strlen(s[j]))
            {
                if(strcmp(t,s[j])==0)
                {
                    printf("%d  %c",len,s[j][len/2]);
                    flag=1;
                    break;
                }
            }
        }
        i++;

    }

}
