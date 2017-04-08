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
    int p;
    cin >> p;
    int pageNumber = 0;
    int turns = 0;
    int pageFound = 0;
    while(pageNumber<=n){
    	turns++;
    	if(pageNumber == p){
    		pageFound = turns;
    	}
    	pageNumber++;
    	if(pageNumber == p){
    		pageFound = turns;
    	}
    	pageNumber++;
		
    }

    if((pageFound - 1)<(turns-pageFound)){
    	pageFound = pageFound - 1;
    } else { 
    	pageFound = turns-pageFound;
    }


    cout << pageFound;
    return 0;
}
