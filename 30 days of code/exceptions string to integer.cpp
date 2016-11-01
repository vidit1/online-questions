#include <iostream>
#include <stdexcept>      // std::invalid_argument
#include <bitset>         // std::bitset
#include <string>  

using namespace std;  

int main()
{
	string s;
	cin>>s;
    int myint,flag = 1;
    try{
	 	myint= stoi(s);
	 	cout<<myint<<endl;
    }
    catch(const std::invalid_argument ia ){
    	flag=0;
    	cout<<"Bad String"<<endl;

    }
    return 0;
}