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

long long int minimum(long long int total,long long int  min){
	if(min > total)
    	return total;
    return min;
}

long long int  maximum(long long int  total,long long int  max){
	if(max < total)
    	return total;
    return max;
}


int main(){
    long int a;
    long int b;
    long int c;
    long int d;
    long int e;
    cin >> a >> b >> c >> d >> e;

    long int total,min,max;
    total = a + b + c + d + e;
    min   = total;
    max	  = 0;
    
    min = minimum(total -a ,min);
    min = minimum(total -b ,min);
    min = minimum(total -c ,min);
    min = minimum(total -d ,min);
    min = minimum(total -e ,min);


    max = maximum(total -a ,max);
    max = maximum(total -b ,max);
    max = maximum(total -c ,max);
    max = maximum(total -d ,max);
    max = maximum(total -e ,max);

    cout<<min<<" "<<max;
	cin>>a;
    return 0;
}

