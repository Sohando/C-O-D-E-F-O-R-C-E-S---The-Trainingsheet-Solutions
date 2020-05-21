#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> in(n);
    for (auto &it : in) cin >> it;
    sort(in.begin(), in.end());
    int mn = in[0], mx = in[n - 1];
    int cnt = 0;
    for (int army : in) {
        if (army > mn and army < mx) cnt++;        
    }
    cout << cnt << '\n';
    return 0;
}
