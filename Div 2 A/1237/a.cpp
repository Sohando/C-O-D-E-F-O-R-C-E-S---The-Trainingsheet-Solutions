#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    int arr[n], odd = 0, even = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];        
        if (arr[i] & 1) odd += arr[i] / 2;
        else even += arr[i] / 2;
        // arr[i] /= 2;
    }
    int kom = (even + odd);
    even = 0, odd = 0;
    for (int i = 0; i < n; ++i) {
        if (kom > 0 and (arr[i] & 1) and arr[i] < 0) {
            // odd er negitive baraite hobe 
            kom--;
            cout << arr[i] / 2 - 1 << '\n';
            odd += arr[i] / 2 - 1;
        } else if (kom < 0 and (arr[i] & 1) and arr[i] > 0) {
            kom++;
            cout << arr[i]/ 2 + 1 << '\n';
            odd += arr[i] / 2 + 1;  
        } else {        
            cout << arr[i] / 2 << '\n';
            if (arr[i] & 1) odd += arr[i] / 2;
            else even += arr[i] / 2;                
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
