#include<bits/stdc++.h>
using namespace std;
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
void solve() {
    int n, m;
    char ch;
    cin >> n >> m >> ch;
    vector<vector<char>> Desk(n, vector<char>(m));
    for (int i = 0; i < n; ++i) {
        string str;
        cin >> str;
        for (int x = 0; x < m; ++x) {
            Desk[i][x] = str[x];
        }
    }
    set<char> dep;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (Desk[i][j] == ch) {
                for (int x = 0; x < 4; ++x) {
                    int u = dx[x] + i;
                    int v = dy[x] + j;
                    if (u >= 0 and u < n and v >= 0 and v < m and Desk[u][v] != '.' and Desk[u][v] != ch) {
                        dep.insert(Desk[u][v]);
                    }
                }
            }
        }
    }
    cout << dep.size() << '\n';
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
