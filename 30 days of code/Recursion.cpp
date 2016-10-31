#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int x){
	if(x==1){
		return 1;
	}
	return x*factorial(x-1);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int number;
    cin>>number;
    cout<<factorial(number);
    return 0;
}
