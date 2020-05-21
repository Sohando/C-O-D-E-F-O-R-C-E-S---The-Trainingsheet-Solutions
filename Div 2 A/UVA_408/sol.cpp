#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n, m;
    while (cin >> n >> m) {
        if (__gcd(n, m) > 1) {
            printf("%10d %9d %s", n, m, "   Bad Choice\n\n");
        } else {
            printf("%10d %9d %s", n, m, "   Good Choice\n\n");            
        }        
    }  
    return;        
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();    
}
