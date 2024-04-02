#include<bits/stdc++.h>

using namespace std;

void a(int xval)
{
   int x;
   x = xval;
   cout << &x << endl;
}
void b(int yval)
{
   int y;
   y = yval;
   cout << &y << endl;
}
int main()
{
   a(4);
   b(15);
   return 0;
} 
