#include <iostream>
using namespace std;

char* concat(const char* a, const char* b )
{
    int k = 0;
    int g = 0;
    while (a[k] != '\0')
    {
        k++;
    }
    while (b[g] != '\0')
    {
        g++;
    }

    char* c = new char[k + g + 1];

    for (int m = 0; m < k; m++)
    {
        c[m] = a[m]; 
    }
    for (int m = 0; m < g; m++)
    {
        c[m + g] = b[m]; 
    }
    c[k + g] = '\0';
    return c;
}

int main() 
{
    const char* a = "Hello";
	const char* b = "World";
    cout << concat(a, b);
}
