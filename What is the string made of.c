#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char s[100];
    int i,len;
    long long int no=0;
    scanf("%s",s);
    len=strlen(s);
    if(len>100)
        return 0;
    for(i=0;i<len;i++)
    {
        switch(s[i])
        {
        case '0':
            no+=6;
            break;
        case '1':
             no+=2;
            break;
        case '2':
             no+=5;
            break;
        case '3':
             no+=5;
            break;
        case '4':
             no+=4;
            break;
        case '5':
             no+=5;
            break;
        case '6':
             no+=6;
            break;
        case '7':
             no+=3;
            break;
        case '8':
             no+=7;
            break;
        case '9':
             no+=6;
            break;
        }
    }
    printf("\n%lld",no);
}
