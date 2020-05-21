#include<bits/stdc++.h>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	if (a == b and a == 6) cout << "0/1" << '\n';
	int have = 6 - max(a, b) + 1;
	cout << have / __gcd(6, have) << "/" << 6 / __gcd(6, have) << '\n';
	return 0;
}

