#include <iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++) a[i][j] = 0;
    }
    int k = 1;
    a[0][n/2] = k;
    int t = n * n - 1;
    int i = 0;
    int j = n/2;
    while(t > 0)
        {
            int I;
            if(i-1 < 0) I = n - 1;
            else I = (i-1) % n;
            int J = (j+1) % n;
            if(a[I][J] == 0 )
            {
                a[I][J] = ++k;
                i = I;
                j = J;
            }
            else {
                a[i+1][j] = ++k;
                i = i + 1;
            }
            t--;
        }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++) cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
