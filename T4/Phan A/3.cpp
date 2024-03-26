#include <iostream>
using namespace std;
int main(){
	char a1[2][12] = {
  {31,28,31,30,31,30,31,31,30,31,30,31},
  {31,29,31,30,31,30,31,31,30,31,30,31}
};  
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 12; j++){
			cout << a1[i][j] << " ";
		}
		cout << endl;
	}
char a2[2][12] = {
  31,28,31,30,31,30,31,31,30,31,30,31,
  31,29,31,30,31,30,31,31,30,31,30,31
};  
for(int i = 0; i < 2; i++){
		for(int j = 0; j < 12; j++){
			cout << a2[i][j] << " ";
		}
		cout << endl;
	}
}
/* a, Hieu qua khoi tao cua ca hai cach la nhu nhau
   b, Chuong trinh chay binh thuong
   c, Chi so cot la bat buoc, chi so hang co the co hoac khong. */
