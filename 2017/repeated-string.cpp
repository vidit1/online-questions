#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    string s;
    cin >> s;
    long n;
    cin >> n;
    long long int m  = n%s.length();
    long long int count = 0;
    int temp = 0;
   	for(int i=0;i<s.length();i++){
   		if(m!=0 && i < m){
   			if(s[i]=='a')
   				temp++;
   		}

		if(s[i]=='a')
   			count++;

   	}
   	long long int ml = n/s.length();
   	count = count*ml + temp;
   	cout << count<<endl;
    return 0;
}
