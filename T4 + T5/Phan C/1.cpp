#include <bits/stdc++.h>
using namespace std;

bool check[10000];

bool exist(int* a, int n){
    for (int i = 0; i < n; i++){
        if (check[a[i]]){
            return true;
        }else{
            check[a[i]] = true;
        }
    }
    return false;
}

int main(){
    int n = 10;
    int arr[n] = {1, 0, 3, 6, 2, 9, 2, 4, 2, 5};

    if (exist(arr, n)){
        cout << "YES";
        return 0;
    }
    cout << "NO";

    return 0;
}
