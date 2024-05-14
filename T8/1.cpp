#include<bits/stdc++.h>
using namespace std;

struct point
{
    int x,y;
};


int main()
{
    point p;
    p.x = 10;
    p.y = 10;
    cout << &p << " " << &p.x << " " << &p.y << endl;
}

//0x6ffe10 0x6ffe10 0x6ffe14
//&p.x == &p và dia chi cua p.y cao hon 4 bytes
