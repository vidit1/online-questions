#include<iostream>
using namespace std;
int main()
{
    int t,j,count,i,n,a,max=0;
    int arr[100001]={0};
    cin>>t;
    if(t>10)
        return 0;
    for(i=0;i<t;i++)
    {
        cin>>n;
        count=n;
        if(n>100000)
            return 0;
        for(j=0;j<n;j++)
        {
            cin>>a;
            arr[a]++;
            if(max<a)
                max=a;
        }
        count=arr[0];
        for(j=0;j<=max;j++)
        {
            if(count<arr[j])
                count=arr[j];
        }
        n=n-count;
        cout<<n<<endl;
        std::fill_n(arr,100001,0);
    }
    return 0;
}
