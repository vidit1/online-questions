#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int n,i,k,j,flag=1;
    scanf("%d",&n);
    if(!(n<=10))
       return 0;
    for(i=0;i<n;i++)
    {
        scanf("%s",s);

        if(strlen(s)>=26)
        {

            j=97;
            while(j<=122&&flag==1)
            {

                flag=0;
                for(k=0;k<strlen(s);k++)
                {
                    if(s[k]==j)
                    {
                        flag=1;
                        j++;
                        break;

                    }
                }
                if(flag==0)
                    break;

            }
            if(flag==1)
                printf("\nYES");
            else
                printf("\nNo");
        }
        else
        printf("\nNo");
    }

}
