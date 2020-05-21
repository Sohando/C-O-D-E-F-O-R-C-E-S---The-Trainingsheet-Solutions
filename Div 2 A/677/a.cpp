#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, h;
    cin >> n >> h;
    vector<int> vi(n);
    int cnt = 0;
    for (auto &it : vi) {
        cin >> it;
        cnt += it > h;        
    }
    cout << cnt * 2 + (n - cnt) << endl;
    return 0;
}
