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
int minmum(int a,int b){
	return a < b ? a : b;
}

int main(){
    string s;
    cin >> s;
    string t;
    cin >> t;
    int k;
    cin >> k;
    // cout << s.length() << endl <<t.length() << endl;
    int mim_length = minmum(s.length(),t.length());
    int used = abs(s.length()-t.length());
    bool flag = false;
    for(int i=0;i<mim_length;i++){
    	if(s[i]!=t[i]){
    		flag = true;
    	}
    	if(flag){
    		used +=2;
    	}
    	if(used > k){
    		break;
    	}
    }
	if((used <= k && used%2 == k%2) || s.length() + t.length() < k)
        cout << "Yes";
    else cout << "No";
   
    // cin >> k; 
    return 0;
}
