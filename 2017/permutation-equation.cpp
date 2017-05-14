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
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; 
    cin >> n;
    vector <int> a(n);
    map<int,int> b;
    for(int i=0;i<n;i++){
    	cin >> a[i];
    	b[a[i]] = i+1;
    }

    for(int i=1; i<= n; i++){
    	int temp = b[i];
    	cout << b[temp]<<endl;
    }


    return 0;
}
