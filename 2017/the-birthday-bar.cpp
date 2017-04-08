#include <bits/stdc++.h>

using namespace std;

int getWays(int *squares, int d, int m, int n){

    bool startDedcution = false;
    int sum = 0;
    int count = 0;
    for(int it=0;it<n;it++){
        if(it==m)
            startDedcution = true;
        sum +=squares[it];

        if(startDedcution){
            sum = sum - squares[it - m];
        }

        if(sum == d && it>= m-1)
            count++;
    }

    return count ;
}

int main() {
    int n;
    cin >> n;
    int s[n] = {0};
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;
    int result = getWays(s, d, m, n);
    cout<<result<<endl;

    return 0;
}
