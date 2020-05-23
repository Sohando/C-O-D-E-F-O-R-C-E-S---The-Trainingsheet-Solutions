#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    string str;
    cin >> n;
    cin >> str;
    deque<char> dq;
    dq.push_back(str[0]);
    str = str.substr(1, n);
    while (!str.empty()) {
        char ch = str[0];
        int sz = (int) str.size();
        if (sz & 1) dq.push_back(ch);
        else dq.push_front(ch);
        str = str.substr(1, n);            
    }
    for (auto t : dq) cout << t;
    cout << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
