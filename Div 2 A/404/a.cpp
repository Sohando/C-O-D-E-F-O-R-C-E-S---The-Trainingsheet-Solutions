#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }
    set<char> st, ptr, dtr;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < (int) s[i].size(); ++j) {
            // cout << s[i][j];
            if (i == j) ptr.insert(s[i][j]);
            else if (i + j == n - 1) ptr.insert(s[i][j]);
            else dtr.insert(s[i][j]);
            st.insert(s[i][j]);
        } //cout << endl;
    }
    if ((int) st.size() == 2 and (int) ptr.size() == 1 and (int) dtr.size() == 1) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
