#include<stdio.h>
int main()
{
  int n,i,j,k=0,flag=1;
  long long int a,b,m;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%lld %lld %lld",&a,&b,&m);
      j=a;
      k=0;
      while(j<=b&&flag==1)
      {
            if(j%m==0)
            {
                k++;
                b=b-j;
                b=b/m;
                k=k+b;
                flag=0;
            }
            j++;
      }
      flag=1;
      printf("%d\n",k);
  }
}
