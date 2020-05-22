#include<bits/stdc++.h>
using namespace std;
void solve() {
    string str, tmp = "";
    cin >> str;
    long long cnt = 1, sum = 0;
    for (int i = 0; i < (int) str.size(); ++i) {
        sum += str[i] - '0';        
    }
    cout << sum << endl;
    if ((int) str.size() <= 1) {
        cout << 0 << endl;
        return;
    }
    if (sum <= 9) {
        cout << cnt << endl;
        return;
    }
    while (sum > 9) {
        long long ans2 = sum;
        sum = 0;
        while (ans2 > 0) {
            sum += ans2 % 10;
            ans2 /= 10;
        }
        cout << sum << endl;
        cnt++;
    }
    cout << cnt << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
