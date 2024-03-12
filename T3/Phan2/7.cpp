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
	cout << ship.id << endl << ship.size.x <<" " << ship.size.y << endl;
}
int main(){
	ship tau1, tau2;
	cin >> tau1.size.x >>tau1.size.y >>tau1.size.w >>tau1.size.l >> tau1.id >> tau1.dx >> tau1.dy;
	cin >> tau2.size.x >>tau2.size.y >>tau2.size.w >>tau2.size.l >> tau2.id >> tau2.dx >> tau2.dy;
	int loop = 0;
	while (loop < 10) {
    tau1.move(); tau2.move();
    display(tau1); display(tau2);
    loop ++;
}

}
