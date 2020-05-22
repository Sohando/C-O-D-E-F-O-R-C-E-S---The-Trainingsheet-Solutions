#include<bits/stdc++.h>
using namespace std;
vector<int> sol;
int r1, r2, c1, c2, d1, d2;
bool check(vector<int> foo) {
    // for (int i : foo) cout << i << " ";
    // cout << endl;
    int z = foo[0];
    int o = foo[1];
    int t = foo[2];
    int th = foo[3];
    if (z + o == r1 and z + t == c1 and z + th == d1 and o + t == d2 and o + th == c2 and th + t == r2) {
        return true;
    }    
    return false;
}
bool play(int curr, int taken, vector<int> Table, vector<int> foo) {
    if (taken == 4) {
        if (check(foo)) {
            for (int i : foo) sol.push_back(i);
            return true;
        }
    } else {
        for (int i = 1; i <= 9; ++i) {
            if (!Table[i]) {
                Table[i] = 1;
                foo.push_back(i);
                if (play(i, taken + 1, Table, foo)) return true;
                Table[i] = 0;
                foo.pop_back();
            }
        }
    }
    return false;
}
void solve() {
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    vector<int> Table(10, 0);
    vector<int> foo;
    if (play(0, 0, Table, foo)) {
        for (int i = 0; i < 2; ++i) {
            cout << sol[i] << " ";
        }
        cout << endl;
        for (int i = 2; i < 4; ++i) {
            cout << sol[i] << " ";
        }
        
    } else {
        cout << -1 << endl;
    }
} 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
