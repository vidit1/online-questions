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

vector<int> findDivisors(int a){
    std::vector<int> divisors;

    for(int i = 1 ; i <=sqrt(a);i++){
        if(a%i==0){
            divisors.push_back(i);
        }
    }

    return divisors;
}

int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
   vector<int>::iterator it,i,j;
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0;b_i < m;b_i++){
       cin >> b[b_i];
    }

    int smallestNumber  = 100;


   for(it = b.begin();it !=b.end();it++){
        if(smallestNumber  > *it){
            smallestNumber = *it;
        }
   }

   cout << endl << smallestNumber << endl;

   cout << "divisors of smallestNumber = ";

   vector<int> commonDivisors = findDivisors(smallestNumber);

   for(i = commonDivisors.begin() ; i != commonDivisors.end() ; i++){
        cout<<*i << " ";
   }

   cin >> n;

    return 0;
}

