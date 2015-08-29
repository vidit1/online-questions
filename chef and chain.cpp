#include<iostream>
#include<cstring>
using namespace std;
class chain
{
    int count,length,flag;
public:
    int first(string s)
    {
            count=0;
            length=s.size();
            flag=1;
            for(int i=0;i<length;i++)
            {
                if(flag==1)
                {
                    if(s[i]=='-')
                    {
                        flag=0;
                    }

                    else
                    {
                        s[i]='-';
                        count++;
                        flag=0;
                    }
                }
                else
                {
                    if(s[i]=='+')
                        flag=1;
                    else
                    {
                         s[i]='+';
                         count++;
                         flag=1;
                    }

                }
            }
            return count;
    }
    int second(string s)
    {
            count=0;
            length=s.size();
            flag=0;
            for(int i=0;i<length;i++)
            {
                if(flag==1)
                {
                    if(s[i]=='-')
                    {
                        flag=0;
                    }

                    else
                    {
                        s[i]='-';
                        count++;
                        flag=0;
                    }
                }
                else
                {
                    if(s[i]=='+')
                        flag=1;
                    else
                    {
                         s[i]='+';
                         count++;
                         flag=1;
                    }

                }
            }
            return count;

    }
};
int main()
{
    chain ch;
    int t,len;
    cin>>t;
    if(t>7)
    return 0;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        if(len=s.size()>100000)
            return 0;
        int x,y;
        x=ch.first(s);
        y=ch.second(s);
        if(x>y)
            cout<<y<<endl;
        else
            cout<<x<<endl;

    }
    return 0;

}
