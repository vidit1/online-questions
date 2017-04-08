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
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    float denoinator = v2 - v1;
    float distance = (x1-x2)/denoinator;
    float va = floor(distance);
    if(distance<0){
    	cout<<"NO";
    	return 0 ;
    }
    if(distance == va)
    	cout << "YES";
    else 
    	cout<<"NO";
    return 0;
}
