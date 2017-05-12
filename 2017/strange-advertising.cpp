#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int recursive(int day,int people){
	if(day == 1)
		return 2;
	return floor(people/2);
}

int main() {
	int a;
	cin >>a;
	int total_people = 0;
	int people = 0;
	int *temp1 = 
	for(int i=1;i<=a;i++){
		people = recursive(i,people);
		// cout <<"day = "<< i <<" people "<<people<<endl;
		total_people +=people;
		people = people*3;

	}
	cout << total_people;
	// cin  >> a;
    return 0;
}

