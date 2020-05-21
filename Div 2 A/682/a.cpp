#include<bits/stdc++.h>
using namespace std;
int arr[1000009][10];
int main() {
    int n, m;
    cin >> n >> m;
    int x = min(n, m);
    int y = max(n, m);    
    for (int i = y; i >= 1; --i) {
        arr[i][i % 10]++;
        for (int in = 0; in < 10; ++in) arr[i][in] += arr[i + 1][in];
    }
    long long ans = 0;
    for (int i = 1; i <= x; ++i) {
        if (i % 10 == 1) ans += arr[1][4] + arr[1][9];
        else if (i % 10 == 2) ans += arr[1][8] + arr[1][3];
        else if (i % 10 == 3) ans += arr[1][2] + arr[1][7];
        else if (i % 10 == 4) ans += arr[1][6] + arr[1][1];
        else if (i % 10 == 5) ans += arr[1][5] + arr[1][0];
        else if (i % 10 == 6) ans += arr[1][4] + arr[1][9];
        else if (i % 10 == 7) ans += arr[1][3] + arr[1][8];
        else if (i % 10 == 8) ans += arr[1][2] + arr[1][7];
        else if (i % 10 == 9) ans += arr[1][1] + arr[1][6];
        else if (i % 10 == 0) ans += arr[1][0] + arr[1][5];
    }
    cout << ans << '\n';
    return 0;
}   
