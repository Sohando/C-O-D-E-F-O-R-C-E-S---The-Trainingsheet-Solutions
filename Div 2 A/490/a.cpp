#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> vi(n);
    vector<int> cnt(4);
    map<int, vector<int>> mp;
    for (int i = 0; i < n; ++i) {
        cin >> vi[i];
        cnt[vi[i]]++;
        mp[vi[i]].push_back(i + 1);
    }
    int m = min(cnt[1], min(cnt[2], cnt[3]));
    cout << m << endl;
    for (int c = 0; c < m; ++c) {
        cout << mp[1][c] << " " << mp[2][c] << " " << mp[3][c] << "\n";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
