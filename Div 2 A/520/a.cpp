#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> st;
    for (char c : s) st.insert(tolower(c));
    if ((int) st.size() == 26) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
