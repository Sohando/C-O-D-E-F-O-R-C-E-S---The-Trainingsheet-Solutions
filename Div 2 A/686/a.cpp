#include<bits/stdc++.h>
#define ios ios::sync_with_stdio(false), cin.tie(0);
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
void solve() {
	ll n, x, cnt = 0;	
	cin >> n >> x;
	for (int i = 0; i < n; ++i) {
		char ch; int u;
		cin >> ch >> u;
		if (ch == '+') x += u;
		else {
			if (x >= u) x -= u;
			else cnt++;
		}
	}
	cout << x << " " << cnt << '\n';
	return;
}
int main() {
	ios;
	solve();
	return 0;
}






