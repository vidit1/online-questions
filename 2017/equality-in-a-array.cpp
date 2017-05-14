#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
	int n;
	cin >>n;
	map<int, int>m;
	map<int, int>::iterator itr;
	for(int i=0;i<n;i++){
		int x;
		cin >> x;
		itr = m.find(x);
		if(itr == m.end()){
			m[x] = 0;
		}
		m[x]++;
	}
	int max = 0;
	for(itr = m.begin();itr!=m.end();itr++){
		if(max < itr->second){
			max = itr->second;
		}
	}

	cout << n-max;
	cin >>n;

    return 0;
}
