#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	deque<int> dq;
	cin >> n;
	for (int i = 0, x; i < n; ++i) {
		cin >> x;
		dq.push_back(x);
	}
	int m1 = 1, a = 0, b = 0;
	while (!dq.empty()) {
		int u = *dq.begin();
		int v = *dq.rbegin();
		if (m1) {
			if (u > v) {
				a += u;
				dq.pop_front();
			} else {
				a += v;
				dq.pop_back();
			}
		} else {
			if (u > v) {
				b += u;
				dq.pop_front();
			} else {
				b += v;
				dq.pop_back();
			}
		}
		m1 = 1 - m1;
	}
	cout << a << " " << b << '\n';
	return 0;
}
