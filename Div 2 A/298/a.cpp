#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int L = -1, R = -1;
    for (int i = 0; i < n; ++i) {
        if (L == -1 and s[i] == 'L') L = i;
        else if (s[i] == 'R' and R == -1) R = i;
    }
    if (R == -1) {
        for (int i = n - 1; i >= 0; --i) {
            if (s[i] == 'L') {
                cout << i + 1 << " ";
                break;            
            }
        }
        cout << L << "\n";
    } else if (L == -1) {
        cout << R + 1 << " ";
        for (int i = n - 1; i >= 0; --i) {
            if (s[i] == 'R') {
                cout << i + 2 << endl;
                // cout << "Somossha koi " << i - 2 << endl;
                break;
            }
        }
    } else {
        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == 'L' and s[i+1] == 'R' or (s[i] == 'R' and s[i + 1] == 'L')) {
                cout << R + 1 << " " << L << '\n';
                break;
            } 
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
