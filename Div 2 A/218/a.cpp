#include<bits/stdc++.h>
using namespace std;
int arr[1000009][10];
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> in(2 * n + 1);
    for (auto &t : in) cin >> t;
    int cnt = 0;
    for (int i = 0; i < 2 * n + 1; ++i) {
        if ((i & 1) and cnt < k and (in[i - 1] < in[i] - 1) and (in[i] - 1 > in[i + 1])) {
            cout << in[i] - 1 << " ";
            cnt++;
        } else cout << in[i] << " ";
    }
    cout << endl;
    return 0;
}
