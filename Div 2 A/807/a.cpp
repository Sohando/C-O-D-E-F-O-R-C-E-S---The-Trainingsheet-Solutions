#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    int cng = 0, may = 0;
    cin >> a[0] >> b[0];
    if (a[0] != b[0]) {
        cng++;
        // cout << "rated\n";
        // return 0;
    }
    for (int i = 1; i < n; ++i) {
        cin >> a[i] >> b[i];
        if (a[i] != b[i]) {
            cng++;
            // cout << "rated\n";
            // return 0;
        }
        if (a[i] > a[i - 1]) {
            may++;
            // cout << "maybe\n";
            // return 0;
        }    
    }
    if (cng) cout << "rated\n";
    else if (!may) cout << "maybe\n";
    else cout << "unrated\n";
    return 0;
}
