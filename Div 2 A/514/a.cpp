#include<bits/stdc++.h>
using namespace std;
int main() {
    string n;
    cin >> n;    
    int x = n[0] - '0';
    if (9 - x and x >= 5) cout << 9 - x;
    else cout << x;
    for (int i = 1; i < (int) n.size(); ++i) {
        int nm = n[i] - '0';
        if (nm >= 5) cout << 9 - nm;
        else cout << nm ;
    }
    cout << '\n';
    return 0;
}
