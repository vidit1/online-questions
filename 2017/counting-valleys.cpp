#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int n;
	int count = 0;
	int loc = 0;


	cin  >> n;
	for(int i=0;i<n;i++){
		char c;
		cin >> c;
		int lastLocation = loc;
		if(c=='U'){
			loc ++;
		}

		if(c == 'D'){
			loc--;
		}

		if(loc == 0 && lastLocation <0){
			count ++;
		}
	}

	cout <<count;
    return 0;
}
