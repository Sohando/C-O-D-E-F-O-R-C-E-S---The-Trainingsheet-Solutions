#include<bits/stdc++.h>
using namespace std;
int main() {
    string a, b;
    cin >> a >> b;
    int l = 0, r = 0, f = 0;
    string lf = "", rt = "";
    for (int i = 0; i < (int) a.size(); ++i) {
        if (a[i] == '|') {
            f = 1;
            continue;
        }
        if (f) {
            r++;
            rt += a[i];
        }
        else {
            l++;
            lf += a[i];
        }
    }
    if (min(l, r) + (int) b.size() == max(l, r)) {
        if (l < r) cout << (b + a) << '\n';
        else cout << (a + b) << '\n';
    } else {
        int beshi = max(l, r) - min(l, r);
        if (beshi > (int) b.size()) cout << "Impossible" << '\n';
        else {
            int keep = (int) b.size() - beshi;
            if (keep % 2 == 0) {
                string ans = "";
                if ((int) lf.size() < (int) rt.size()) {
                    for (int i = 0; i < beshi; ++i) lf += b[i];
                } else {
                    for (int i = 0; i < beshi; ++i) rt += b[i];
                }
                for (int i = 0; i < keep; ++i) {
                    if (i & 1) lf += b[i + beshi];
                    else rt += b[i + beshi];
                }
                cout << lf << "|" << rt << '\n';
            } else {
                cout << "Impossible" << '\n';
            }
        }
    }
    return 0;
}
