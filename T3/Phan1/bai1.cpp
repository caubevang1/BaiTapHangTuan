#include<bits/stdc++.h>
using namespace std;

struct point{
	int x, y;
};
void change1(point a){
	a.x += 10;
	a.y += 20;
}
void change2(point &a){
	a.x += 10;
	a.y += 20;
}
int main(){
 point diem;
 cin >> diem.x >> diem.y;
 cout << "Toa do cua diem ban dau lan luot la: " << diem.x << "va" << diem.y << endl;
 change1 (diem); 
 cout << "Toa do cua diem khi truyen tham tri la: " << diem.x << "va" << diem.y << endl;
 change2(diem);
 cout << "Toa do cua diem khi truyen tham bien la: " << diem.x << "va" << diem.y;
}
