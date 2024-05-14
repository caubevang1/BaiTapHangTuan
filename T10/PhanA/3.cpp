#include <iostream>
using namespace std;

int main()
{
char* a = new char[10];
char* c = a + 3;
for (int i = 0; i < 9; i++) a[i] = 'a'; 
a[9] = '\0';
cerr <<"a: " << "-" << a << "-" << endl;
cerr <<"c: " << "-" << c << "-" << endl;
delete c; // xoa con tro ko xac dinh -> co the bao loi
cerr << "a after deleting c:" << "-" << a << "-" << endl;
}
