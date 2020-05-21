#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    for (int cas = 1; cas <= T; ++cas) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int m = b / c;
        int ndiv_m = b - m;
        int n = (a - 1) / c;
        int ndiv_n = (a - 1) - n;
        int ans1 =  ndiv_m - ndiv_n;

        int x = c;
        c += d;        
        m = b / c;
        ndiv_m = b - m;
        n = (a - 1) / c;
        ndiv_n = (a - 1) - n;
        int ans2 =  ndiv_m - ndiv_n;
        
        c = x;
        c += 2 * d;
        m = b / c;
        ndiv_m = b - m;
        n = (a - 1) / c;
        ndiv_n = (a - 1) - n;
        int ans3 =  ndiv_m - ndiv_n;
        
        c = x;
        c += 3 * d;
        m = b / c;
        ndiv_m = b - m;
        n = (a - 1) / c;
        ndiv_n = (a - 1) - n;
        int ans4 =  ndiv_m - ndiv_n;
        cout << ans1 + ans2 + ans3 + ans4 << '\n';
    }
    return 0;
}
