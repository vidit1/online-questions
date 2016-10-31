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

using namespace std;

void toBinary(long long int number){
	string str;
	int max = 0, count = 0;
	while(number){
		int remain = number%2;
		number/=2;
		if(remain==1){
			count++;
			if(max <= count){
				max = count;
			}
		}else{
			count = 0;
		}
	}
	cout << max;
}

int main(){
    long long int n;
    cin >> n;
   	toBinary(n);
    return 0;
}