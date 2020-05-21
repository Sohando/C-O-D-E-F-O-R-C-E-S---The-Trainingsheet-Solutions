#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >>  m;
    long long range = m - n + 1;
    if (range < 3) cout << -1 << endl;
    else if (range == 3) {
        if (!(n & 1) and !(m & 1)) cout << n << " " << n + 1 << " " << m << endl;
        // else if (__gcd(n, m) > 1) cout << n << " " << n +1 << " " << m << endl;
        else cout << -1 << endl;
    } else {
        if ((n & 1)) cout << n + 1 << " " << n + 2 << " " << n + 3 << endl;
        else cout << n << " " << n + 1 << " " << n + 2 << endl;
    }
    return 0;
}
