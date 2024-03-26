#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void swap (int &a, int &b){
		int c = a;
		a = b;
		b = c;
	}

void BubbleSort(int a[], int n){
	int cnt = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n - 1; j++){
			if(a[j] > a[j + 1]){
				swap(a[j + 1], a[j]);
				cnt ++;
			}
		}
		if (cnt == 0) break;
	}
} 
int main(){
	int a[30];
	srand (time(NULL));
	for(int i = 0; i < 30; i++){
		a[i] = rand() % 1945;
	}
	BubbleSort(a,30);
	for(int i = 0; i < 30; i++){
		cout << a[i]<< " ";
	}
}
