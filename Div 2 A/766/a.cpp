#include<bits/stdc++.h>
using namespace std;
int main() {
    string a, b;
    cin >> a >> b;
    if (a == b) cout << -1 << '\n';
    else if ((int) a.size() > (int) b.size()) cout << (int) a.size() << '\n';
    else cout << (int) b.size() << '\n';
    return 0;
}
