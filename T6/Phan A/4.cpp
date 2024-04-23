#include<bits/stdc++.h>

using namespace std;

void mod(int arr[])
{
    arr[0] = 4;
}
void modStr(string s)
{
    s = "def";
}

int main(){
    int arr[3] = {1,2,3};
    for(int i = 0; i < 3; i++) cout << arr[i] << " ";
    cout << endl;
    mod(arr);
    for(int i = 0; i < 3; i++) cout << arr[i] << " ";
    /*
    Output:
        1 2 3 
        4 2 3
    Truyen bang tham chieu
    */
   cout << endl;

   string s = "abc";
   cout << endl;
   modStr(s);
   cout << s << endl;
   /*   
        Output: abc
        Truyen bang tham tri
   */

}
