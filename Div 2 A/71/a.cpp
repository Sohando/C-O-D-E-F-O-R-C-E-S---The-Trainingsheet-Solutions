#include<bits/stdc++.h>
#define ios ios::sync_with_stdio(false), cin.tie(0);
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
void solve() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		string str;
		cin >> str;
		int sz = (int) str.size();
		if (sz > 10) cout << str[0] << sz - 2 << str[sz - 1] << '\n';
		else cout << str << '\n';
	}
	return;
}
int main() {
	ios;
	solve();
	return 0;
}





