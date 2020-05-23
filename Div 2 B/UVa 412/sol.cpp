#include<bits/stdc++.h>
using namespace std;
void solve(int T) {
    vector<int> in(T);
    for (auto &it : in) cin >> it;
    int cnt = 0, pairs = 0;;
    for (int i = 0; i < T; ++i) {
        for (int j = i + 1; j < T; ++j) {
            if (__gcd(in[i], in[j]) ==  1) cnt++;
            pairs++;
        }
    } 
    if (cnt) {
        // cout << T << " " <<  cnt << " " << pairs << endl;
        double pi_2 = (cnt + 0.) / pairs;
        pi_2 /= 6;
        pi_2 = 1 / pi_2;
        pi_2 = sqrt(pi_2);
        cout << setprecision(6) << fixed << pi_2 << '\n';
    } else {
        cout << "No estimate for this data set." << '\n';
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    while (cin >> T, T) {
        solve(T);    
    } 
    return 0;    
}

