#include <bits/stdc++.h>
using namespace std;
int main(){
	int x; cin >> x;
	for (int i = 1; i <= x; ++i) {
        for (int j = 0; j < x; ++j) {
        	int cnt = ((i + j) % x) ;
        	if(cnt == 0){
        		cnt = 10;
			}
            cout << cnt << " ";
        }
        cout << endl;
    }
}
	
