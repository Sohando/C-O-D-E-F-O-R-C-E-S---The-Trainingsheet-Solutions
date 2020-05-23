#include<bits/stdc++.h>
using namespace std;
void solve() {
    string ans = "ROYGBIV";
    int n;
    cin >> n;
    for (int i = 8; i <= n; ++i) {
        ans += ans[i - 5];
    }
    cout << ans << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
