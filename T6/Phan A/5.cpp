#include<bits/stdc++.h>

using namespace std;

void has(int &a)
{
    cout << &a << endl;
}

int main()
{
    //a.
    int a = 12;
    int c = 3;
    cout << &a << endl;
    has(a);
    /*
        Bien tham chieu v� bien m� n� chieu toi l� c�ng mot bien trong bo nho v� c� c�ng dia chi?
        Output:
            0x11215ffd6c
            0x11215ffd6c
    */

    // int &b; Error: 	"message": "reference variable \"b\" requires an initializer",
    
    // int &b = a;
    // &b = c;
    /*
        Error: expression must be a modifiable lvalue
        Kh�ng the chieu b den bien kh�c sau khi da khoi tao &b = a;
    */
    
}
