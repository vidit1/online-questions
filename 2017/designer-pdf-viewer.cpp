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
    vector<int> h(26);
    for(int h_i = 0; h_i < 26; h_i++){
       cin >> h[h_i];
    }
    string word;
    string::iterator i;
    int maxHeight = 0;
    cin >> word;
    for(i = word.begin();i!=word.end();i++){
    	int index = int(*i)%97;
    	if(maxHeight < h[index]){
    		maxHeight = h[index];
    	}
    }
    cout << word.size() * maxHeight;
    cin >> maxHeight;
    return 0;
}
