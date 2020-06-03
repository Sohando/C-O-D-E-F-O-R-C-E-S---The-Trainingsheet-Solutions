#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
void solve() {
    int n, m;
    cin >> n >> m;
    vi in(n);
    for (auto &t : in) cin >> t;
    int ans = 0, mn = INT_MAX, idx = 1, iter = 2;
    for (int i = 0; i < m; ++i) ans += in[i];
    mn = ans;
    for (int i = m; i < n; ++i) {
        ans -= in[i - m];
        ans += in[i];
        if (ans < mn) {
            idx = iter;
            mn = ans;
        }
        // mn = min(ans, mn);
        iter++;
    }
    cout << idx << '\n';
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
