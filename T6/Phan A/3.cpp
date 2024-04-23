#include<bits/stdc++.h>
using namespace std;

void ThamTri(int a, int b)
{
    cout << "Tham Tri:      " << &a << " " << &b << endl;
}

void ThamChieu(int &a, int &b)
{
    cout << "Tham Chieu: " << &a << " " << &b << endl;
}

int main()
{
    int a = 3;
    int b = 2;
    cout << "&a = " << &a << " " << "&b = " << &b << endl;
    ThamTri(a,b);
    ThamChieu(a,b);
}

/*
    &a = 0x6ffe1c &b = 0x6ffe18
    Tham Tri:   0x6ffdf0 0x6ffdf8
    Tham Chieu: 0x6ffe1c 0x6ffe18
*/
