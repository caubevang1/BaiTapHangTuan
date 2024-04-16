#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


int countMine(char Map[100][100],int x, int y, int m, int n) {
    int cnt = 0;
    for (int i = x - 1; i <= x + 1; i++) {
        for (int j = y - 1; j <= y + 1; j++) {
            if (Map[i][j] == '*') cnt++;
        }
    }
    return cnt;
}
void Loang(char a[100][100],bool visited[100][100], int x, int y, int m , int n){
	if (x == 0 || x > m || y == 0 || y > n || visited[x][y] == true) return;
    visited[x][y] = true;
	for(int i = x - 1; i <= x + 1; i++){
			for(int j = y - 1; j <= y + 1;j++){
					if(a[i][j] != '*'){
						a[i][j] = countMine(a, i, j, m, n) + '0';
							if(a[i][j] == '0'){
								Loang( a, visited, i,  j,  m ,  n);
							}
					}
		}
	}
}
int main(){
	int m, n, k;
	cin >> m >> n >> k;
	char a[100][100]; bool visited[100][100];
	for(int i = 0; i < m + 1; i++){
		for(int j = 0; j < n + 1; j++){
			a[i][j] = '-';
		}
	}
	while(k){
		int i = rand() % m + 1;
		int j = rand() % n + 1;
		if(a[i][j] !='*' && i != 0 && j != 0){
			a[i][j] ='*'; k--;
		}	
	}
	
	while(true){
		int x, y;
		cout << "Nhap x,y: ";
		cin >> x >> y;
		if(a[x][y] == '*'){
		for(int i = 1; i < m + 1; i++){
			for(int j = 1; j < n + 1; j++){
			cout << a[i][j] << ' '; 
		}
		cout << endl;
	}
		cout << "You are dead!" ; break;
}
		else {
			if(countMine(a, x, y, m, n) > 0){
				a[x][y] = countMine(a, x, y, m, n) + '0';
			}
			else {
				Loang(a,visited, x, y, m, n);
			}
			for(int i = 1; i < m + 1; i++){
				for(int j = 1; j < n + 1; j++){
					if(a[i][j] != '0' && a[i][j] != '1'&& a[i][j] != '2'&& a[i][j] != '3' || a[i][j] == '*') {cout << '-' << ' ';}
					else cout << a[i][j] << ' ';
				}
		cout << endl;
			}	
		}
	}
}
