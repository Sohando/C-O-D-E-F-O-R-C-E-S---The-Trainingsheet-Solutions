#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    map<string, int> mp;
    long long ans = 0;
    mp["Tetrahedron"] = 4;
    mp["Cube"] = 6;
    mp["Octahedron"] = 8;
    mp["Dodecahedron"] = 12;
    mp["Icosahedron"] = 20;

    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        ans += mp[s];
    }
    cout << ans << endl;
    return 0;
}
