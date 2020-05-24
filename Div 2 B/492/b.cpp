#include<bits/stdc++.h>
using namespace std;
const double EPS = 1e-9;
void solve() {
    int n, l;
    cin >> n >> l;
    vector<double> in(n);
    for (auto &it : in) cin >> it;
    sort(in.begin(), in.end());
    auto check = [&](double val) {
        if (in[0] - val > 0) return false;
        double prev = in[0] + val;
        for (int i = 1; i < n; ++i) {
            double cPrev = in[i] - val;
            if (cPrev > prev) return false; 
            prev = in[i] + val;
        }
        if (prev < l) return false;
        return true;
    };
    auto bSearch = [&]() {
        double lo = 0, hi = l + 0.;
        while (hi - lo > EPS) {
            double mid = (lo + hi) / 2;
            if (check(mid)) {
                hi = mid;
            } else {
                lo = mid;
            }
        }
        return hi;
    };
    cout << setprecision(9) << fixed << bSearch() << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}   
