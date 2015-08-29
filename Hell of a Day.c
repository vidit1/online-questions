//to do with lower complexity store all the numbers in one array and sort the and print even no from starting and odd from behind
//much easier than this
#include<stdio.h>
int main()
{
    int n,i,j=0,k=0;
    long long int e[1000],o[1000],x;
    scanf("%d",&n);
    if(n>1000)
        return 0;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&x);
        if(x%2==0)
        {
             e[j]=x;
             j++;
        }
        else
        {
            o[k]=x;
            k++;
        }
    }
    sorting(e,j,0);
    sorting(o,k,1);
}
void sorting(long long int a[], int array_size,int flag)
{

     int i, j;
     long long int temp;
     for (i = 0; i < (array_size - 1); ++i)
     {
          for (j = 0; j < array_size - 1 - i; ++j )
          {
              if(flag==0)
               {

                   if (a[j] > a[j+1])
                    {
                        temp = a[j+1];
                        a[j+1] = a[j];
                        a[j] = temp;
                    }
               }
               else
               {
                   if (a[j] < a[j+1])
                    {
                        temp = a[j+1];
                        a[j+1] = a[j];
                        a[j] = temp;
                    }
               }
          }
     }
     printf("\n");
    for(i=0;i<array_size;i++)
        printf("%lld\t",a[i]);
}
