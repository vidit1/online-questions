#include<stdio.h>
int main()
{
    unsigned int wid;
     float tot,left;
    scanf("%d",&wid);
    scanf("%f",&tot);
    left=tot-wid-.50;
    if(wid%5==0&&left>=0)
        printf("%.2f",left);
    else
        printf("%.2f",tot);
    return 0;

}
