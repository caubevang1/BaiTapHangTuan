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
        Bien tham chieu và bien mà nó chieu toi là cùng mot bien trong bo nho vì có cùng dia chi?
        Output:
            0x11215ffd6c
            0x11215ffd6c
    */

    // int &b; Error: 	"message": "reference variable \"b\" requires an initializer",
    
    // int &b = a;
    // &b = c;
    /*
        Error: expression must be a modifiable lvalue
        Không the chieu b den bien khác sau khi da khoi tao &b = a;
    */
    
}
