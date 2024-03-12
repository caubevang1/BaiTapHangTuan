#include <bits/stdc++.h>
using namespace std;
struct Point {
    int x, y;
};

void passByValue(Point p) {
    cout << "Bang tham tri: " << &p << endl;
}

void passByReference(Point& p) {
    cout << "Bang tham bien: " << &p << endl;
}

int main() {
    Point p;
	cin >> p.x >> p.y;
    cout << "Dia chi trong hàm main: " << &p << endl;
    passByValue(p);
    passByReference(p);
    return 0;
}
