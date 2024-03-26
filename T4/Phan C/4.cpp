#include <iostream>
using namespace std;
int main(){
	int m, n; int cnt = 0;
	cin >> m >> n;
	char ch[m][n];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cin >> ch[i][j];
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cnt = 0;
			if(ch[i][j] == '*') continue;
			else{
				for(int a = i - 1; a <= i + 1; a++){
					for(int b = j - 1; b <= j + 1; b++){
						if(ch[a][b] == '*') cnt++;
					}
					ch[i][j] = cnt + '0';
				}
			}
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout << ch[i][j] << " ";
		}
		cout << endl;
	}
}
