#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	char s[101];
	cin >> s;
	for (int i = 0; i < strlen(s); ++i)
		if (s[i] != s[strlen(s) - 1 - i]){
			cout << "NO";
			return 0;
		}
	cout << "YES";
}
