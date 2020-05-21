#include<bits/stdc++.h>
using namespace std;
void solve() {
    vector<vector<char>> Table(4, vector<char>(4));
    for (int i = 0; i < 4; ++i) {
        string str;
        cin >> str;
        for (int x = 0; x < 4; ++x) {
            Table[i][x] = str[x];
        }
    }
    auto check = [&](int x, int y) {
        map<char, int> mp;
        mp[Table[x][y]]++;
        mp[Table[x + 1][y]]++;
        mp[Table[x][y + 1]]++;
        mp[Table[x + 1][y + 1]]++;
        int val = abs(mp['#'] - mp['.']);
        if (val == 2 or val == 4) return true;
        return false;        
    };
    for (int i = 1; i <= 4; ++i) {
        for (int j = 1; j <= 4; ++j) {            
            if (i + 1 <= 4 and j + 1 <= 4) {
                if (check(i - 1, j - 1)) {
                    cout << "YES" << '\n';
                    return;
                 }
            }
        }
    }
    cout << "NO" << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
