#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	for(int i = 0;i < n;i++){
		for(int j = n * 2 - 1; j > 0;j--){
		if(j >= n - i && j <= n + i){
		cout << "*";
		}else {cout << " ";}
		}
		cout << endl;
	}
	
}
