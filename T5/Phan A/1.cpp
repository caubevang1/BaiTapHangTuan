#include<bits/stdc++.h>

using namespace std;

int main()
{
    int c = 0;
    int a[3] = {10,22,31};
    char b[3] = {'a', 'b', 'c'};
    cout << &c << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << &a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << (void*)&b[i] << " ";
    }
}

// �?a ch? c?a c�c ph?n t? trong m?ng a c�ch nhau 4 byte. Output: 0x6ffe00 0x6ffe04 0x6ffe08
// �?a ch? c?a c�c ph?n t? trong m?ng b c�ch nhau 1 byte. Output: 0x6ffdf0 0x6ffdf1 0x6ffdf2 
