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
    // cout << s.length()<<endl;
	int count = 1;	
    for(int i=0;i<s.length();i++){
    	if(int(s[i])>=65&&int(s[i])<=90)
    		count++;
    }
    cout<<count;
    return 0;
}
