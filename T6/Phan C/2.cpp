#include <bits/stdc++.h>

using namespace std;

vector<vector<char> > init(int m, int n, int k) {
    vector<vector<char> > v(m, vector<char>(n, '-'));
    srand(time(NULL));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            v[i].push_back('-');
        }
        v.push_back(v[i]);
    }
    while (k--) {
        int y = rand() % m;
        int x = rand() % n;
        if (v[y][x] != '*') {
            v[y][x] = '*';
        } else {
            k++;
        }
    }
    return v;
}


bool isMine(vector<vector<char> > &Map, int m, int n, int x, int y){\
    if (x < 0 || x >= n || y < 0 || y >= m) {
        cout << "Invalid coordinates\n";
        return false;
    }
    if (Map[y][x] == '*') {
        return true;
    } 
    return false;
}

int countMine(vector<vector<char> > &Map, int m, int n, int x, int y) {
    int cnt(0);
    vector<pair<int, int> > offsets = {
        {-1, -1}, {-1, 0}, {-1, 1},
        {0, -1},           {0, 1},
        {1, -1},  {1, 0},  {1, 1}
    };

    for (const auto& offset : offsets) {
        int nx = x + offset.first;
        int ny = y + offset.second;

        if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
            if (Map[ny][nx] == '*') {
                cnt++;
            }
        }
    }
    return cnt;
}

void printCurr(vector<vector<char> > &currMap, int m, int n) {
    for (int i = 0; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;

    for (int i = 0; i < m; i++) {
        cout << i + 1 << " ";
        for (int j = 0; j < n; j++) {
            cout << currMap[i][j] << " ";
        }
        cout << endl;
    }
}

void floodfill(vector<vector<char> >& currMap,vector<vector<char>>& map ,vector<vector<bool>>& visited, int m, int n, int x, int y, int &cnt) {
    if (x < 0 || x >= n || y < 0 || y >= m || visited[y][x] == true) return;
    visited[y][x] = true;
    cnt++;
    int mine = countMine(map, m, n, x, y);
    if (mine != 0) {
        currMap[y][x] = mine + '0';
    } else {
        currMap[y][x] = '0';
        floodfill(currMap, map, visited, m, n, x-1, y, cnt);
        floodfill(currMap, map, visited, m, n, x+1, y, cnt);
        floodfill(currMap, map, visited, m, n, x, y-1, cnt);
        floodfill(currMap, map, visited, m, n, x, y+1, cnt);
    }
    return;
}


int main() {
    int m, n, k;
    cin >> m >> n >> k;
    vector<vector<char> > map = init(m, n, k);  
    vector<vector<char> > currMap(m, vector<char>(n, '-'));
    vector<vector<bool> > visited(m, vector<bool>(n, false));
    printCurr(map, m, n);
    cout << endl;
    printCurr(currMap, m, n);
    int cnt(0);
    while (true) {
        int x, y; 
        cout << "Input x, y: \n"; 
        cin >> x >> y;
        x--, y--;
        if (isMine(map, m, n, x, y)) {
            currMap[y][x] = '*';
            printCurr(currMap, m, n);
            cout << "You're dead\n";
            break;
        } else {
            floodfill(currMap, map, visited ,m, n, x, y, cnt);
            printCurr(currMap, m, n);
        }
        if (cnt + k == m*n) {
            cout << "You win!\n";
            break;
        }
    }
    return 0;
}
