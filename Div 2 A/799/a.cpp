#include<bits/stdc++.h>
#define ios ios::sync_with_stdio(false), cin.tie(0);
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
void solve() {
	int n, t, k, d;
	cin >> n >> t >> k >> d;
	
	if (((d / t) + 1) * k >= n) cout << "NO" << endl;
	else cout << "YES" << endl;
	
	return;
}
int main() {
	ios;
	solve();
	return 0;
}



