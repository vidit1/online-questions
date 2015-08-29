#include<iostream>
using namespace std;
int main()
{
    int n,t,a,b,c,count,j;
    int *arr;
    cin>>n>>t;
    arr=new int(n);
    std::fill_n(arr,n,0);
    for(int i=0;i<t;i++)
    {
        cin>>a;
        if(a==0)
        {
            cin>>b>>c;
            for(j=b;j<=c;j++)
            {
                if(arr[j]==0)
                    arr[j]=1;
                else if(arr[j]==1)
                    arr[j]=0;
            }
        }
        else if(a==1)
        {
            cin>>b>>c;
            if(b>=n||c>=n)
                return 0;
            count=0;
            for(j=b;j<=c;j++)
            {
                if(arr[j]==1)
                    count++;
            }
            cout<<count<<endl;
        }
    }
}
