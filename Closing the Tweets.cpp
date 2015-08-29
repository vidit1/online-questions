#include<iostream>
#include<cstring>
using namespace std;
int main()
{
   unsigned int n,k,tweet,count=0,i;
    unsigned short int a[1001];
  char  str[100];
  char str1[]="CLICK";
  char str2[]="CLOSEALL";
    cin>>n>>k;
    std::fill_n(a,1001,0);
    if(n>1000&&n<0&&k>1000&&n<0)
        return 0;
    for(i=0;i<k;i++)
    {
        cin>>str;
        strcmp(str,str);
        if(strcmp(str,str1)==0)
        {
            cin>>tweet;
            if(tweet>n)
                return 0;
            if(a[tweet]==0)
            {
                a[tweet]=1;
                count++;
            }
            else if(a[tweet]==1)
            {
                a[tweet]=0;
                count--;
            }
            cout<<count<<endl;
        }
        else if(strcmp(str,str2)==0)
        {
            std::fill_n(a,1001,0);
            count=0;
            cout<<count<<endl;
        }


    }
    return 0;
}
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
   unsigned int n,k,tweet,count=0,i;
    unsigned short int a[1001];
  char  str[100];
  char str1[]="CLICK";
  char str2[]="CLOSEALL";
    cin>>n>>k;
    std::fill_n(a,1001,0);
    if(n>1000&&n<0&&k>1000&&n<0)
        return 0;
    for(i=0;i<k;i++)
    {
        cin>>str;
        strcmp(str,str);
        if(strcmp(str,str1)==0)
        {
            cin>>tweet;
            if(tweet>n)
                return 0;
            if(a[tweet]==0)
            {
                a[tweet]=1;
                count++;
            }
            else if(a[tweet]==1)
            {
                a[tweet]=0;
                count--;
            }
            cout<<count<<endl;
        }
        else if(strcmp(str,str2)==0)
        {
            std::fill_n(a,1001,0);
            count=0;
            cout<<count<<endl;
        }


    }
    return 0;
}
