#include <iostream>

using namespace std;

int main() {
    int* ptr = new int;
    int x = 8;
    ptr = &x;
    delete ptr; // delete non-heap object -> loi (x o day la bien o vung stack)
}

