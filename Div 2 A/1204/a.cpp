#include<bits/stdc++.h>
using namespace std;
void solve() {
    string str;
    cin >> str;
    int sz = (int) str.size();
    string frtry = "";    
    int idx = sz - 1;
    auto fun  = [&](string pk) {
        if (pk == "00") return "0";
        if (pk == "01") return "1";
        if (pk == "10") return "2";
        if (pk == "11") return "3";
    };
    for (int i = 1; i <= sz / 2; ++i) {
        string tmp = "";
        // cout << idx - 1 << " " << idx << " " << str.size() << endl;
        tmp += str[idx - 1];
        tmp += str[idx];
        frtry += fun(tmp);
        idx -= 2;
    }
    if (sz & 1) frtry += '1';
    // cout << frtry << endl;
    map<char, int> cnt;
    for (int i = 0; i < (int) frtry.size(); ++i) {
        cnt[frtry[i]]++;
    }
    if (cnt['2'] == 0 and cnt['3'] == 0) {
        if (cnt['1'] == 1) {
            cout << (int) frtry.size() - 1 << '\n';
        } else cout << (int) frtry.size() << '\n';
    } else {
        cout << (int) frtry.size() << '\n';
    }
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
