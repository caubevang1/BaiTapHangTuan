#include <iostream>
using namespace std;

void f(int *a){
	cout << sizeof(a) << endl;
}
int main(){
	int a[5];
	cout << sizeof(a) << endl; //20
	f(a); //8
}
