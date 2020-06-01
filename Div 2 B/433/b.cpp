#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
void solve() {
    ll n;
    cin >> n;
    vi in(n);
    for (auto &it : in) cin >> it;
    vi normal(n + 10, 0), sorted(n + 10, 0), inn(in);
    sort(inn.begin(), inn.end());
    auto normal_build = [&]() {
        auto add = [&](int idx, int val) {
            while (idx <= n) {
                normal[idx] += val;
                idx += idx & -idx;
            }
        };
        for (int i = 1; i <= n; ++i) {
            add(i, in[i - 1]);
        }
    };
    auto sorted_build = [&]() {
        auto add = [&](int idx, int val) {
            while (idx <= n) {
                sorted[idx] += val;
                idx += idx & -idx;
            }
        };
        for (int i = 1; i <= n; ++i) {
            add(i, inn[i - 1]);
        }
    };
    normal_build();
    sorted_build();
    // for (int i : in) cout << i << " ";
    // cout << endl;
    // for (int i : inn) cout << i << " ";
    // cout << endl;
    // for (int i : normal) cout << i << " ";
    // cout << endl;
    // for (int i : sorted) cout << i << " ";
    // cout << endl;
    int m;
    cin >> m;
    for (int q = 1, t, x, y; q <= m; ++q) {
        cin >> t >> x >> y;
        if (t & 1) {
            auto sum = [&](int r) {
                ll s = 0;
                while (r >= 1) {
                    s += normal[r];
                    r -= r & -r;
                }
                return s;
            };
            cout << sum(y) - sum(x - 1) << '\n';
        } else {
            auto sum = [&](int r) {
                ll s = 0;
                while (r >= 1) {
                    s += sorted[r];
                    r -= r & -r;
                }
                return s;
            };
            cout << sum(y) - sum(x - 1) << '\n';
        }
    }
    return;
}   
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int T;
    // cin >> T;
    // for (int cas = 1; cas <= T; ++cas) {
        solve();
    // }
    return 0;
}
