#include<iostream>
using namespace std;
int main()
{
    int t,i,temp,n;
    int *a;
    long long int sum;
    cin>>t;
    if(t>10)
        return 0;
    for(i=0;i<t;i++)
    {
        temp=1;
        cin>>n;
        a=new int[n];
        cin>>sum;
        while(n>=0)
        {
            n--;
            sum=sum-temp;
            if(sum==0&&n==0)
            {
                break;
            }
            else if(sum<temp)
            {
                n++;
                break;
            }
            else if(sum==0)
            {
                n++;
                break;
            }
            temp++;

        }
        cout<<n<<endl;
    }
    return 0;
}
