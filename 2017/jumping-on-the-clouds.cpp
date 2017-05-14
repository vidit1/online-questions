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
    int n;
    cin >> n;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
    }

    int position = 0;
    int step = 0;
    while(position < n-1){
    	if((position+2)<n && c.at(position+2)==0){
    		position = position +2;
    	} else if(c.at(position)==0){
    		position = position +1;
    	}
    	step++;
    }
    cout << step <<endl;
    cin >> n;
    return 0;
}
