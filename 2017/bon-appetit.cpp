#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int n,k;
	int amount_sum = 0;
    cin >> n >> k;
    vector<int> score(n);
    for(int score_i = 0; score_i < n; score_i++){
       cin >> score[score_i];
       if(score_i != k){
       		amount_sum += score[score_i];
       }
    }
    int cost ;
    cin >> cost;

    if(cost == (amount_sum /2)){
    	cout << "Bon Appetit";
    } else { 
    	cout << cost - amount_sum/2;
    }

    // cin >> n;
    return 0;
}
