#include <stdio.h>
#include <iostream>
using namespace std;
bool check(int a){
	int b = a;
	int sum  = 0;
	while (a){
		sum = sum * 10 + a % 10;
		a = a/10;
	}
	if(sum == b) return 1;
	else return 0;
}
int main(){
	int n; cin >> n; int cnt  = 0;
	while(n--){
		cnt = 0;
		int a, b;
		cin >> a >> b;
	for(int i = a; i < b; i++){
		if(check(i)) cnt ++;	
		}
		cout << cnt << endl;
	}
}

