#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n, m;
    cin >> n >> m;
    long long odd = (n + 2 -1) / 2;
    if (m <= odd) {
        cout << 2 * m - 1 << '\n';
    } else {
        m -= odd;
        cout << 2 * m << '\n';
    }
    return 0;
}
