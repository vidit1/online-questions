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
    int n,max = 0;
    cin >> n;
    vector<int> height(n);
    map<int,int> candles;
    map<int,int>::iterator it;


    for(int height_i = 0;height_i < n;height_i++){
       cin >> height[height_i];
       it = candles.find(height[height_i]);
       if(it == candles.end()){
       		candles[height[height_i]] = 1;
       } else { 
       		candles[height[height_i]] ++;
       }
    }

    for(it = candles.begin();it!=candles.end();it++){
    	if(max < it->first){
    		max = it->first;
    	}
    }

    cout << candles[max];
    // cin >> n;
    return 0;
}
