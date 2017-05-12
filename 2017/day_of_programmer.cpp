#include <bits/stdc++.h>

using namespace std;

string solve(int year){
    if(year<=1917 && year >=1700){
        if(year%4 == 0){
            return "12.09.";
        } else {
            return "13.09.";
        }
    } else if(year == 1918){
        return "26.09.";
    } else {
        if(year % 400 == 0 || (year %4==0 && year%100!=0)){
            return "12.09.";
        } else {
            return "13.09.";
        }
    }
}

int main() {
    int year;
    cin >> year;
    string result = solve(year);
    cout << result << year<<endl;
    // cin>>year;
    return 0;
}
