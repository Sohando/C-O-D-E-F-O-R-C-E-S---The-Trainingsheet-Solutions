#include<bits/stdc++.h>
using namespace std;
void solve() {
    string str;
    cin >> str;
    vector<char> vi;
    for (int i = 0; i < (int) str.length(); ++i) {
        if (str[i] == '1' or str[i] == '2' or str[i] == '3') {
            vi.push_back(str[i]);
        }
    }
    sort(vi.begin(), vi.end());
    cout << vi[0];
    for (int i = 1; i < (int) vi.size(); ++i) {
        cout << "+" << vi[i];
    } 
    cout << "\n";
    return; 
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}    
