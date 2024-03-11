#include<bits/stdc++.h>
using namespace std;

struct point{
	int x, y;
};

point mid_point(const point a,const point b){
	point mid;
	mid.x = (a.x + b.x)/2;
	mid.y = (a.y + b.y)/2;
	return mid;
}
int main(){
 point diem1,diem2;
 cin >> diem1.x >> diem1.y >> diem2.x >> diem2.y;
 point mid  = mid_point(diem1,diem2);
 cout << mid.x << " " << mid.y;
}
