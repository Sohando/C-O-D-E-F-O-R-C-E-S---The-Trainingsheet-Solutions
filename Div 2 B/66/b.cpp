#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> in(n);
    for (int i = 0; i < n; ++i) {
        cin >> in[i];
    }
    auto fun = [&](int idx) {
        int prev = in[idx];
        int rprev = in[idx];
        int lcnt = 0, rcnt = 0;
        int ridx = idx + 1;
        idx--;
        while (idx >= 0 and in[idx] <= prev) {
            prev = in[idx];
            lcnt++;
            idx--;
        }
        while (ridx < n and in[ridx] <= rprev) {
            rprev = in[ridx];
            ridx++;
            rcnt++;
        }
        return rcnt + lcnt + 1;
    };
    int mx = -1;
    for (int i = 0; i < n; ++i) {
        mx = max(mx, fun(i));
        cout << in[i] << " " << fun(i) << endl;
    }
    cout << mx << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
