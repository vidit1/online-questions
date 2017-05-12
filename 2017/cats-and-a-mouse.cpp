#include <iostream>

using namespace std;


int main(){
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int x;
        int y;
        int z;
        cin >> x >> y >> z;
        int diff1 = (z-x);
        int diff2 = (z-y);

        diff1 = diff1 < 0 ? diff1*-1 : diff1;
        diff2 = diff2 < 0 ? diff2*-1 : diff2;

        if(diff1<diff2){
        	cout << "Cat A"<<endl;
        } else if(diff1 == diff2){
        	cout << "Mouse C"<<endl;
        } else {
        	cout << "Cat B"<<endl; 	
        }

    }
    return 0;
}
