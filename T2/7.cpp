#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n,t = -1;
    cin >> n;
    while (n>0)
        {
            if(n != t) cout << n <<' ';
            t = n;
            cin >> n;
        }
    cout << n;
}
