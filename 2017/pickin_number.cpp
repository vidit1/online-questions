#include <iterator>
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
    vector<int> a(n);
   	map<int, int> key_map;
   	map<int, int>::iterator map_itr,previous,next;
    vector<int> ::iterator itr;
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    sort(a.begin(),a.end());

    for(itr = a.begin();itr!=a.end();itr++){
   		map_itr = key_map.find(*itr);
   		if(map_itr == key_map.end()){
   			key_map[*itr] = 0;
   		}
   		key_map[*itr] ++;

    }

    int max_count = 0;
    for(map_itr = key_map.begin(),next = key_map.begin();map_itr!=key_map.end();map_itr++,next++){
    	next = map_itr;
    	std::advance(next,1);
    	int current_count = map_itr->second;
    	if (next !=key_map.end()){
    		int first = map_itr->first;
			int second = next->first;
			if(abs(first-second) <= 1){
    			current_count += next->second  ;
    		}
    	}
    	if(max_count < current_count)
    		max_count = current_count;
    	advance(next,-1);
    	previous = map_itr;
    }


    cout << max_count;
    cin >> n;
    return 0;
}
