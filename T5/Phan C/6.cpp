#include <iostream>
using namespace std;

int gcd(int a, int b){
	int r;
	while (b){
		r = a % b;
		if(r == 0) return b;
		a = b;
		b = r;
	}
	return 0;
}
int main(){
	int a, b;
	cin >> a >> b;
	if (gcd(a,b) == 1) cout << "Co";
	else cout << "Ko";
}
