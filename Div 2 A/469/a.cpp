#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    set<int> st;
    int p; cin >> p;
    for (int i = 0, x; i < p; ++i) {
        cin >> x;
        st.insert(x);
    }
    cin >> p;
    for (int i = 0, x; i < p; ++i) {
        cin >> x;
        st.insert(x);
    }
    if ((int) st.size() == n) {
        puts("I become the guy.");
    } else {
        puts("Oh, my keyboard!");
    }
    return 0;
}
