#include<bits/stdc++.h>
using namespace std;

struct rect{
	int x, y, w, l;
};
struct point{
	int x, y;
};
bool check(rect a, point b){
	return (b.x <= a.x + a.w && b.y <= a.y + a.l);
}
int main(){
	rect tri;
	point pt;
	cin >> tri.x>> tri.y >> tri.w >> tri.l >> pt.x >> pt.y;
	cout << check (tri,pt);
}
