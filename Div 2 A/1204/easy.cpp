#include<bits/stdc++.h>
using namespace std;
void solve() {
    string str;
    cin >> str;
    int sz = (int) str.size();
    map<char, int> cnt;
    for (int i = 0; i < sz; ++i) {
        cnt[str[i]]++;
    }
    if (cnt['1'] == 1 and sz & 1) {
        cout << sz / 2 << endl;
    } else {
        if (str == "0") cout << 0 << endl;
        else cout << (int) ceil((sz + .0) / 2) << endl;
    }
} 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
