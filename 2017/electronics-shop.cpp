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
    int s;
    int n;
    int m;
    int amountSpent = -1;
    cin >> s >> n >> m;
    vector<int> keyboards(n);
    for(int keyboards_i = 0;keyboards_i < n;keyboards_i++){
       cin >> keyboards[keyboards_i];
    }
    vector<int> pendrives(m);
    for(int pendrives_i = 0;pendrives_i < m;pendrives_i++){
       cin >> pendrives[pendrives_i];
    }

    vector<int>::iterator i,j;

    for(i = keyboards.begin();i!=keyboards.end();i++){
        for(j = pendrives.begin();j!=pendrives.end();j++){
            if((*i+*j)<=s && (*i+*j)>amountSpent){
                amountSpent = (*i+*j);
            }
        }
    }

    cout << amountSpent;

    return 0;
}
