#include <iostream>
#include <cmath>
using namespace std;

bool check(int a){
	if(a < 2) return 0;
	else if (a == 2) return 1;
	else {
		for(int i = 2; i < a; i++){
			if(a % i == 0) return 0; 
		}
		return 1;
	}
}
int main(){
	int n; cin >> n;
	for(int i = 2; i < n; i++){
		if(check(i)) cout << i << ' ';
	}
}
