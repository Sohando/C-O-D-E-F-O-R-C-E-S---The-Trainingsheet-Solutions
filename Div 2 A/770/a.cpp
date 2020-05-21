#include<bits/stdc++.h>
#define ios ios::sync_with_stdio(false), cin.tie(0);
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
void solve() {
    int n, m;
    cin >> n >> m;
    string ans = "";
    for (int i = 0; i < m; ++i) ans += char('a' + i);
    cout << ans;
    int need = n - m;
    for (int i = 1; i <= need; ++i) {
        if (i & 1) cout << ans[0];
        else cout << ans[1];
    }
    cout << endl;
	return;
}
int main() {
	ios;
	solve();
	return 0;
}
