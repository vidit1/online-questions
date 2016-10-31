#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    map<string,string> phone;
    long int cases;
    cin>>cases;
    for (long int i=0;i<cases;i++){
        string str, number;
        cin>>str>>number;
        phone[str] = number;
    }
    
       string str;
    while(cin>>str){
       if(phone[str].length()==0){
           cout<<"Not found"<<endl;
       }else{
           cout<<str<<"="<<phone[str]<<endl;
       }
    }
    return 0;
}
