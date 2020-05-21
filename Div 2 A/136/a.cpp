#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        arr[x] = i + 1;
    }
    for (int i = 1; i <= n; ++i) {
        cout << arr[i] << " ";
    }
    cout << '\n';
    return;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
