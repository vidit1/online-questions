#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int max_count = 0 ;
    int max_value ;
    cin >> n;
    vector<int> types(n);
    map<int, int> birds;
    std::map<int, int>::iterator itr;
    for(int types_i = 0; types_i < n; types_i++){
       cin >> types[types_i];
       itr = birds.find(types[types_i]);
       if(itr == birds.end()){
       		birds[types[types_i]] = 1;
       } else { 
       		birds[types[types_i]] ++;
       }

    }

    for(itr = birds.begin() ; itr != birds.end();++itr){
    	// cout << itr->first << " => "<<itr->second << endl; 
    	if(max_count < itr->second){
    		max_count = itr->second;
    		max_value = itr->first;
    	}
    }

    cout << max_value << endl;
    // cin >> n;
    return 0;
}
