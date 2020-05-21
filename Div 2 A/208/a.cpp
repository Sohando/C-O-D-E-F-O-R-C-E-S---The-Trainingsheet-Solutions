#include<bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin >> str;
    vector<int> pos;
    string x = "";
    // cout << str << endl;
    for (int i = 0; i < (int) str.size(); ++i) {
        if (i + 3 <= (int) str.size()) {            
            x = str.substr(i, 3);
            // cout << x << endl;
            if (x == "WUB") pos.push_back(i);
        } else break;
    }
    if (pos.empty()) {
        cout << str << '\n';
        return 0;
    }
    x = "";
    for (int i = 0; i < pos[0]; ++i) {
        x += str[i];
    }
    if (!x.empty()) cout << x << " ";
    for (int i = 0; i < (int)  pos.size() - 1; ++i) {
        // cout << i << " ";
        if (pos[1 + i] - pos[i] == 3) continue;
        else {
            x = "";
            for (int k = pos[i] + 3; k < pos[i + 1]; ++k) x += str[k];
            cout << x << " ";
        }
    }
    x = "";
    for (int i = pos[(int) pos.size() - 1] + 3; i < (int) str.size(); ++i) {
        x += str[i];
    }
    if (!x.empty()) cout << x;
    cout << endl;
    return 0;
}
