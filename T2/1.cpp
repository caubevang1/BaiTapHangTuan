#include <bits/stdc++.h>
using namespace std;
int main(){
    int x; cin >> x; int cnt = 0;
    if(x < 2){
    cout << "no";
		}
	else {
		for (int  i = 2; i <= x;i++){
			if(x % i == 0){
			cnt++;}
			
		}
    if(cnt == 1){
    	cout << "yes";}
    	else {cout << "no";}
}
}
