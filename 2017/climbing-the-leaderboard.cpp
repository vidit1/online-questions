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


int main(){
    int n,counter = 0;
    cin >> n;
    vector<int> scores(n),board;
    vector<int>::reverse_iterator i;
    
    for(int scores_i = 0;scores_i < n;scores_i++){
       cin >> scores[scores_i];
       if(scores_i == 0){
        board.push_back(scores[scores_i]);
       }
       else {
        if(board.back() != scores[scores_i])
            board.push_back(scores[scores_i]);

       }
    }

    int m;
    cin >> m;
    vector<int> alice(m);
    i=board.rbegin();
    counter = 0;

    for(int alice_i = 0;alice_i < m;alice_i++){
       cin >> alice[alice_i];
          while(i!=board.rend()){
            if(alice[alice_i] < *i){
              break;
            } 
            i++;counter++;

          }                 
       if(counter == 0 ){
          cout<<board.size()+1<<endl;
       } else if(counter >= board.size()){
          cout<<1<<endl; 
       }else {
          cout<<board.size()-counter+1 <<endl;
       }
    }

    cin >> n;
    return 0;
}
