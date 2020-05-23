#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    map<int, int> pos;
    for (int i = 0, x; i < n; ++i) {
        cin >> x;
        pos[x] = i + 1;
    }
    int m;
    cin >> m;
    long long v = 0, p = 0;
    for (int i = 0, x; i < m; ++i) {
        cin >> x;
        v += pos[x] - 1 + 1;
        p += n - pos[x] + 1;
    }
    cout << v << " " << p << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
