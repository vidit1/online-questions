#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string time;
    cin >> time;
    int morning,h,m,s;
    if(time[8]=='A')
    	morning = 1;
    else 
    	morning = 0;
    try{
    	h = stoi(time.substr(0,2));
    	m = stoi(time.substr(3,2));
    	s = stoi(time.substr(6,2));
    	// cout<<"hr - "<<h<<"m - "<<m<<"s-"<<s<<"mrn - "<<morning;
    	if(morning == 1){
    		if(h==12){
    			h = 0;
    		}
    	}else{
    		if(h!=12){
    			h +=12;
    		}
    	}
    	cout<<(h<10?"0":"")<<h<<":"<<(m<10?"0":"")<<m<<":"<<(s<10?"0":"")<<s;
    }catch(...){
    	cout<<"Invalid string";
    	return 0;
    }
    return 0;
}
