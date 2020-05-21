#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> in(n);
    for (auto &it : in) cin >> it;
    sort(in.begin(), in.end());
    int sm = accumulate(in.begin(), in.end(), 0);
    int you = 0, cnt = 0;
    for (int i = n - 1; i >= 0; --i) {
        you += in[i];
        sm -= in[i];
        cnt++;
        if (you > sm) break;
    }
    cout << cnt << endl;
    return 0;
}
