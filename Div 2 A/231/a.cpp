#include<bits/stdc++.h>
using namespace std;
int main() {
	int cnt = 0;
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int a, b, c;
		cin >> a >> b >> c;
		int ans = 0;
		ans += a + b + c;
		if (ans >= 2) cnt++;
	}
	cout << cnt << '\n';
	return 0;
}
