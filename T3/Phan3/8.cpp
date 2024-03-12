#include <bits/stdc++.h>
using namespace std;

struct point{
	int x, y;
};
int main(){
	point p;
	cin >> p.x >> p.y;
	cout << &p <<endl << &(p.x) << endl << &(p.y);
}
// Dia chi cua p va cua p.x giong nhau
