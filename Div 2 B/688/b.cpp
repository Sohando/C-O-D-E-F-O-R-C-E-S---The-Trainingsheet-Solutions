#include<bits/stdc++.h>
using namespace std;
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
void solve() {
    string number, prev;
    cin >> number;
    vector<string> Table = {"00", "11", "22", "33", "44", "55", "66", "77", "88", "99"};    
    if (number.size() == 1) {
        char ch = number[0];
        cout << Table[ch - '0'] << '\n';
    } else {
        prev = "11";
        for (int i = 10, x; i <= (int) number.size(); ++i) {
            if (i % 10 == 0) {
                x = 0;
            }
            string ans = "";
            for (int j = 0; j < (int) prev.size() / 2; ++j) {
                ans += prev[j];
            }
            ans += Table[x];
            for (int j = (int) prev.size() / 2; j < (int) prev.size(); ++j) {
                ans += prev[j];
            }
            x++;
            prev = ans;
        }
    }
    cout << prev << '\n';
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
