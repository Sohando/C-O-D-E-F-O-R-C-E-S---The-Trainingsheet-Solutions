#include<bits/stdc++.h>
#define ios ios::sync_with_stdio(false), cin.tie(0);
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
void solve() {
	ll a, b, c;
	cin >> a >> b >> c;
	ll it;
	ll cnt = 0, org = 0;
	for (int i =0; i < a; ++i) {
		cin >> it;
		if (it <= b) org += it;
		if (org > c) org = 0, cnt++;
	}
	cout << cnt << '\n';
	return;
}
int main() {
	ios;
	solve();
	return 0;
}


