#include<bits/stdc++.h>
using namespace std;
struct Value {
    long long wgt, amnt;
};
void solve() {
    int n, m;
    cin >> n >> m;
    vector<Value> in(m);
    for (auto &it : in) {
        cin >> it.wgt >> it.amnt;
    }
    // for (auto it : in) cout << it.wgt << " " << it.amnt << endl;
    sort(in.begin(), in.end(), [&](Value a, Value b) {
        // return a.wgt * b.amnt < b.wgt * a.amnt;
        return a.amnt > b.amnt;
    });
    // for (auto it : in) cout << it.wgt << " " << it.amnt << endl;
    long long ans = 0;
    for (int i = 0; i < m; ++i) {
        if (n <= 0) break;
        if (in[i].wgt <= n) {
            ans += in[i].wgt * in[i].amnt;
            n -= in[i].wgt;
            // cout << "Taking " << in[i].wgt << " " << in[i].amnt << endl;            
        } else {            
            int mi = n;
            ans += in[i].amnt * mi;
            n -= mi;
            // cout << "Hence " << mi << " " << in[i].amnt << endl;
        }
    }
    cout << ans << '\n';
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
