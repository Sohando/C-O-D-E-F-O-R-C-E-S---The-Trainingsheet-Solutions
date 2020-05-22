#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    int backup = 0;
    int dollar = 0;
    vector<int> in(n);
    for (auto &it : in) cin >> it;
    dollar += in[0];
    for (int i = 1; i < n; ++i) {
        if (in[i] > in[i - 1]) {
            if (backup >= in[i] - in[i - 1]) backup -= (in[i] - in[i - 1]);
            else dollar += in[i] - in[i - 1];
        } else backup += in[i - 1] - in[i];
    }
    cout << *max_element(in.begin(), in.end()) << '\n';
    // cout << dollar << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
