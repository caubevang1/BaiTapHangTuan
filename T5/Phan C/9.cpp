#include <iostream>
#include <stdlib.h>
using namespace std;

int ran(int n){
	return rand() % n;
}
int main(){
	int n; cin >> n;
	cout << ran(n);
	}
