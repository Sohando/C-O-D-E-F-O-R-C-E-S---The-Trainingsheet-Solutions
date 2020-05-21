#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    string moves;
    cin >> n >> moves;
    int pos[n];
    for (int i = 0; i < n; ++i) cin >> pos[i];
    int ans = INT_MAX;
    for (int i = 0; i < n; ++i) {
        if (moves[i] == 'R') {
            int tmp = i;
            while (i + 1 < n and moves[i + 1] == 'L') {
                i++;
                break;
            }
            if (tmp != i) {
                ans = min(ans, (pos[i] - pos[tmp]) / 2);
                cout << i << " " << tmp << endl;
            }
        }
    }   
    if (ans == INT_MAX) cout << -1 << '\n';
    else cout << ans << '\n';    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
