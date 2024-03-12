#include <bits/stdc++.h>
using namespace std;
struct rect{
	int x, y, w, l;
};
struct ship{
	rect size;
	string id;
	int dx,dy; 
	
void move(){
	size.x += dx;
	size.y += dy;
	}
};
void display(const ship& ship){
	cout << ship.id << endl << ship.size.x <<" " << ship.size.y;
}
int main(){
	ship tau;
	cin >> tau.size.x >>tau.size.y >>tau.size.w >>tau.size.l >> tau.id >> tau.dx >> tau.dy;
	tau.move();
	display(tau);
}
