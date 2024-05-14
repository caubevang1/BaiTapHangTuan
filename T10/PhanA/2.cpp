#include <iostream>
using namespace std;

int main()
{
 int* p = new int;
 int* p2 = p;
 *p = 10;
 delete p; // loi, luc nay vung nho dc giai phong, p2 chi toi 1 vung nho khong dc cap phep -> co the bao loi
*p2 = 100;
 cout << *p2;
 delete p2;

}
