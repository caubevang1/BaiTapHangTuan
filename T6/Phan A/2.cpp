#include<bits/stdc++.h>

using namespace std;

long factorial(int x)
{   
    cout << "x = " << x << " at " << &x << endl;
    if(x==1) return x;
    return x*factorial(x-1);
}

int main()
{
    int x = 5;
    cout << factorial(x);
}
/*
x = 5 at 0x6ffdf0
x = 4 at 0x6ffdb0
x = 3 at 0x6ffd70
x = 2 at 0x6ffd30
x = 1 at 0x6ffcf0 */
