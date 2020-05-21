#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;    
    if (n == 1 and m < 10) cout << m << '\n';
    else if (n == 1 and m == 10) cout << -1 << '\n';
    else {
       if (m < 10) {
            cout << m;
            for (int i = 2; i < n; ++i) cout << 0;
            cout << m << '\n';
       } else {
            cout << 1;
            for (int i = 2; i <= n; ++i) cout << 0;
            cout << '\n';
       }
    }
    return 0;
}
