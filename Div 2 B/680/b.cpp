#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> in(n);
    for (int i = 0; i < n; ++i) {
        cin >> in[i];
    }
    k--;
    int lptr = k, rptr = k;
    int cnt = 0;
    while (lptr >=0 and rptr < n) {
        if (lptr == rptr and in[lptr] and in[rptr]) cnt += 1;
        else if (in[lptr] and in[rptr]) cnt += 2;
        lptr--;
        rptr++;
    }
    while (lptr >= 0) {
        cnt += in[lptr];
        lptr--;
    }
    while (rptr < n) {
        cnt += in[rptr];
        rptr++;
    }
    cout << cnt << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
