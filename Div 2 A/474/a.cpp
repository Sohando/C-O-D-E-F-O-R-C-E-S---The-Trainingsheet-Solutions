#include<bits/stdc++.h>
using namespace std;
int main() {
    string keyboard[] = {
        {"qwertyuiop"},
        {"asdfghjkl;"},
        {"zxcvbnm,./"}
    };
    map<char, pair<int, int>> pos;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < (int) keyboard[i].size(); ++j) {
            pos[keyboard[i][j]] = {i, j};
        }
    }
    char ch;
    string s;
    cin >> ch;
    cin >> s;
    if (ch == 'R') {
        for (int i = 0; i < (int) s.size(); ++i) {
            int p = pos[s[i]].first;
            int q = pos[s[i]].second;
            cout << keyboard[p][q - 1];
        }
    } else {
        for (int i = 0; i < (int) s.size(); ++i) {
            int p = pos[s[i]].first;
            int q = pos[s[i]].second;
            cout << keyboard[p][q + 1];
        }
    }
    cout << '\n';
    return 0;
}
