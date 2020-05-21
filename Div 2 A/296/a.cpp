#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> in(n);
    set<int> st;
    for (auto &t : in) {
        cin >> t;
        st.insert(t);
    }
    if (n == 1) {
        cout << "YES" << '\n';  
    } else if ((int) st.size() == 1) {
        cout << "NO" << '\n';            
    } else {
        sort(in.begin(), in.end());
        int mx = -1;
        map<int, int> mp;
        for (int i = 0; i < n; ++i) {
            mp[in[i]]++;
            mx = max(mx, mp[in[i]]);
        }        
        if (mx <= n - mx + 1) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
