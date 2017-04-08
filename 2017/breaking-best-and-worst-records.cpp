#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> score(n);
    for(int score_i = 0; score_i < n; score_i++){
       cin >> score[score_i];
    }
    std::vector<int>::iterator i = score.begin();

    int min = *i, min_count = 0;
    int max = *i, max_count = 0;

    for( i = score.begin() + 1; i!=score.end() ; i++){
    	if(*i > max ){
    		max_count ++;
    		max = *i;
    	}
    	else if (*i < min){
    		min_count ++;
    		min = *i;
    	}
    }
    cout<<max_count << " " << min_count << endl;
    // cin >> n;
    return 0;
}
