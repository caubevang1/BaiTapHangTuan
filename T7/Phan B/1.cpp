#include<bits/stdc++.h>
using namespace std;

int main( )
{ 
   char a[4] = "abc"; 
   for (char *cp = a; (*cp) != '\0'; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
   } 

   int b[4] = {1,2,3,4};
   for (int &x : b)
   {
        cout << &x << " : " << x << endl;
   }

   double c[4] = {1.1, 1.2, 1.3,1.4};
   for (double *x = c; *x != 1.4; x+=2)
   {
        cout << x << " : " << *x << endl; 
   }
   return 0;
}
