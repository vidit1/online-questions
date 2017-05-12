#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int reversetNumber(int a){
	int b = 0;
	while(a>0){
		int remainder = a%10;
		b = b*10 + remainder;
		a = a/10;
	}
	return b;
}


int main() {
	int a,b;
	double k;
	cin >> a >> b >>k;
	int count = 0;
	for(int i=a;i<b;i++){
		int difference = abs(i - reversetNumber(i));
		double d = difference/k;
		int c = floor(d) == d ?count ++:0;
	}
	cout << count;
	cin >>a;
    return 0;
}

