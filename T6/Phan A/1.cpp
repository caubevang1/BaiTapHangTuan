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

// Ğ?a ch? c?a các ph?n t? trong m?ng a cách nhau 4 byte. Output: 0x6ffe00 0x6ffe04 0x6ffe08
// Ğ?a ch? c?a các ph?n t? trong m?ng b cách nhau 1 byte. Output: 0x6ffdf0 0x6ffdf1 0x6ffdf2 
