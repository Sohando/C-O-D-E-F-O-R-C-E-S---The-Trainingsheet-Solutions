#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int k;
    int cnt = 0;
    cin >> n >> k;
    for (int i = 0, x; i < n; ++i) {
        cin >> x;
        vector<int> arr(10, 0);
        while (x > 0) {
            int rem = x % 10;
            arr[rem]++; 
            x /= 10;
        }
        for (int i = 0; i <= k; ++i) {
            if (!arr[i]) goto f;                
        }
        cnt++;
        f:;
    }
    cout << cnt << '\n';
    return 0;
}
